#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 105
#define MAX_DEG 105
#define INF 1000000000

/* Danh sách kề (chỉ dùng để biết cạnh nào tồn tại, phục vụ việc di chuyển) */
typedef struct {
    int neighbors[MAX_DEG];
    int degree;
} AdjList;

static AdjList adj[MAX_N];
static long long spDist[MAX_N][MAX_N];
static int n, m;

static void addEdge(int x, int y) {
    adj[x].neighbors[adj[x].degree++] = y;
    adj[y].neighbors[adj[y].degree++] = x;
}

/* Floyd-Warshall: khoảng cách ngắn nhất theo trọng số giữa mọi cặp đỉnh */
static void floydWarshall(void) {
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (spDist[i][k] + spDist[k][j] < spDist[i][j])
                    spDist[i][j] = spDist[i][k] + spDist[k][j];
}

int main(void) {
    if (scanf("%d %d", &n, &m) != 2) return 1;

    memset(adj, 0, sizeof(adj));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            spDist[i][j] = (i == j) ? 0 : INF;

    for (int i = 0; i < m; i++) {
        int x, y, w;
        scanf("%d %d %d", &x, &y, &w);
        addEdge(x, y);
        if (w < spDist[x][y]) { spDist[x][y] = w; spDist[y][x] = w; }
    }

    floydWarshall();

    int a, b, c, d, r;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &r);

    /* Trạng thái (u,v) hợp lệ nếu khoảng cách giữa hai robot > r */
    #define VALID(u, v) (spDist[u][v] > r)

    if (!VALID(a, b) || !VALID(c, d)) {
        printf("Khong the!\n");
        return 0;
    }

    int totalStates = n * n;
    int *parent  = malloc(totalStates * sizeof(int));
    char *visited = calloc(totalStates, sizeof(char));
    int *queue   = malloc(totalStates * sizeof(int));
    int front = 0, rear = 0;

    int startState  = a * n + b;
    int targetState = c * n + d;
    visited[startState] = 1;
    parent[startState] = -1;
    queue[rear++] = startState;

    int found = (startState == targetState);
    while (!found && front < rear) {
        int cur = queue[front++];
        int u = cur / n, v = cur % n;

        for (int i = 0; i < adj[u].degree && !found; i++) {
            int nb = adj[u].neighbors[i];
            int next = nb * n + v;
            if (!visited[next] && VALID(nb, v)) {
                visited[next] = 1;
                parent[next] = cur;
                queue[rear++] = next;
                if (next == targetState) found = 1;
            }
        }
        for (int i = 0; i < adj[v].degree && !found; i++) {
            int nb = adj[v].neighbors[i];
            int next = u * n + nb;
            if (!visited[next] && VALID(u, nb)) {
                visited[next] = 1;
                parent[next] = cur;
                queue[rear++] = next;
                if (next == targetState) found = 1;
            }
        }
    }

    if (!visited[targetState]) {
        printf("Khong the!\n");
    } else {
        int path[MAX_N * MAX_N];
        int len = 0;
        for (int s = targetState; s != -1; s = parent[s])
            path[len++] = s;
        for (int i = len - 1; i >= 0; i--)
            printf("%d %d\n", path[i] / n, path[i] % n);
    }

    free(parent);
    free(visited);
    free(queue);
    return 0;
}