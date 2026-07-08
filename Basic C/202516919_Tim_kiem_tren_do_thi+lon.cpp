#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 6000
#define WORD_LEN 5
#define MAX_DEGREE 100
#define NOT_FOUND -1

typedef struct {
    int neighbors[MAX_DEGREE];
    int degree;
} AdjList;

typedef struct {
    int *items;
    int size;
    int capacity;
} IntVector;

static void vector_push(IntVector *v, int x) {
    if (v->size == v->capacity) {
        v->capacity = v->capacity ? v->capacity * 2 : 4;
        v->items = (int *)realloc(v->items, v->capacity * sizeof(int));
    }
    v->items[v->size++] = x;
}

static char words[MAX_WORDS][WORD_LEN + 1];
static int wordCount = 0;

/* Bài A: đồ thị vô hướng G (khác nhau đúng 1 vị trí) */
static AdjList undirectedAdj[MAX_WORDS];
/* Bài B: đồ thị có hướng D (4 chữ cuối của u xuất hiện trong v) */
static IntVector forwardAdj[MAX_WORDS];
static IntVector backwardAdj[MAX_WORDS];

/* Bài A: kiểm tra cạnh của đồ thị vô hướng G */
static int isOneLetterApart(int u, int v) {
    int diff = 0;
    for (int i = 0; i < WORD_LEN; i++)
        if (words[u][i] != words[v][i])
            diff++;
    return diff == 1;
}

/* Bài B: kiểm tra cung của đồ thị có hướng D */
static int hasSuffixArc(int u, int v) {
    int used[WORD_LEN] = {0};
    for (int i = 1; i < WORD_LEN; i++) {
        int matched = 0;
        for (int j = 0; j < WORD_LEN; j++) {
            if (!used[j] && words[u][i] == words[v][j]) {
                used[j] = 1;
                matched = 1;
                break;
            }
        }
        if (!matched) return 0;
    }
    return 1;
}

static void buildGraphs(void) {
    memset(undirectedAdj, 0, sizeof(undirectedAdj));
    for (int u = 0; u < wordCount; u++) {
        for (int v = 0; v < wordCount; v++) {
            if (u == v) continue;

            if (v > u && isOneLetterApart(u, v)) {
                if (undirectedAdj[u].degree < MAX_DEGREE)
                    undirectedAdj[u].neighbors[undirectedAdj[u].degree++] = v;
                if (undirectedAdj[v].degree < MAX_DEGREE)
                    undirectedAdj[v].neighbors[undirectedAdj[v].degree++] = u;
            }

            if (hasSuffixArc(u, v)) {
                vector_push(&forwardAdj[u], v);
                vector_push(&backwardAdj[v], u);
            }
        }
    }
}

/* Bài A(a): đếm số thành phần liên thông của G */
static int countComponents(void) {
    int visited[MAX_WORDS];
    int queue[MAX_WORDS];
    int componentCount = 0;

    memset(visited, 0, sizeof(visited));
    for (int start = 0; start < wordCount; start++) {
        if (visited[start]) continue;
        componentCount++;

        int front = 0, rear = 0;
        queue[rear++] = start;
        visited[start] = 1;
        while (front < rear) {
            int u = queue[front++];
            for (int i = 0; i < undirectedAdj[u].degree; i++) {
                int nb = undirectedAdj[u].neighbors[i];
                if (!visited[nb]) {
                    visited[nb] = 1;
                    queue[rear++] = nb;
                }
            }
        }
    }
    return componentCount;
}

/* Bài A(b): BFS đường đi ngắn nhất vô hướng trên G */
static int bfsUndirected(int src, int dst, int parent[]) {
    int dist[MAX_WORDS];
    int queue[MAX_WORDS];

    for (int i = 0; i < wordCount; i++) { dist[i] = NOT_FOUND; parent[i] = NOT_FOUND; }
    dist[src] = 0;

    int front = 0, rear = 0;
    queue[rear++] = src;
    while (front < rear) {
        int u = queue[front++];
        if (u == dst) break;
        for (int i = 0; i < undirectedAdj[u].degree; i++) {
            int nb = undirectedAdj[u].neighbors[i];
            if (dist[nb] == NOT_FOUND) {
                dist[nb] = dist[u] + 1;
                parent[nb] = u;
                queue[rear++] = nb;
            }
        }
    }
    return dist[dst];
}

/* Bài B(a): Kosaraju để tìm các thành phần liên thông mạnh của D */
static int topoOrder[MAX_WORDS];
static int topoTop = 0;
static int dfsVisited[MAX_WORDS];
static int sccId[MAX_WORDS];
static int sccCount = 0;

static void dfsForward(int start) {
    static int stack[MAX_WORDS], edgeIdx[MAX_WORDS];
    int top = 0;
    stack[top] = start; edgeIdx[top] = 0;
    dfsVisited[start] = 1;
    top++;

    while (top > 0) {
        int u = stack[top - 1];
        int i = edgeIdx[top - 1];
        if (i < forwardAdj[u].size) {
            int nb = forwardAdj[u].items[i];
            edgeIdx[top - 1]++;
            if (!dfsVisited[nb]) {
                dfsVisited[nb] = 1;
                stack[top] = nb; edgeIdx[top] = 0;
                top++;
            }
        } else {
            topoOrder[topoTop++] = u;
            top--;
        }
    }
}

static void dfsBackward(int start, int comp) {
    static int stack[MAX_WORDS];
    int top = 0;
    stack[top++] = start;
    sccId[start] = comp;

    while (top > 0) {
        int u = stack[--top];
        for (int i = 0; i < backwardAdj[u].size; i++) {
            int nb = backwardAdj[u].items[i];
            if (sccId[nb] == NOT_FOUND) {
                sccId[nb] = comp;
                stack[top++] = nb;
            }
        }
    }
}

static void kosaraju(void) {
    memset(dfsVisited, 0, sizeof(dfsVisited));
    topoTop = 0;
    for (int i = 0; i < wordCount; i++)
        if (!dfsVisited[i]) dfsForward(i);

    for (int i = 0; i < wordCount; i++)
        sccId[i] = NOT_FOUND;

    sccCount = 0;
    for (int i = topoTop - 1; i >= 0; i--) {
        int u = topoOrder[i];
        if (sccId[u] == NOT_FOUND)
            dfsBackward(u, sccCount++);
    }
}

/* Bài B(b): liệt kê các từ cùng thành phần liên thông mạnh với u */
static void printSccMembers(int u) {
    int comp = sccId[u];
    for (int i = 0; i < wordCount; i++)
        if (sccId[i] == comp)
            printf("%s ", words[i]);
    printf("\n");
}

/* Bài B(c): BFS đường đi ngắn nhất có hướng trên D */
static int bfsDirected(int src, int dst, int parent[]) {
    int dist[MAX_WORDS];
    int queue[MAX_WORDS];

    for (int i = 0; i < wordCount; i++) { dist[i] = NOT_FOUND; parent[i] = NOT_FOUND; }
    dist[src] = 0;

    int front = 0, rear = 0;
    queue[rear++] = src;
    while (front < rear) {
        int u = queue[front++];
        if (u == dst) break;
        for (int i = 0; i < forwardAdj[u].size; i++) {
            int nb = forwardAdj[u].items[i];
            if (dist[nb] == NOT_FOUND) {
                dist[nb] = dist[u] + 1;
                parent[nb] = u;
                queue[rear++] = nb;
            }
        }
    }
    return dist[dst];
}

static void printPath(int src, int dst, int parent[]) {
    if (dst == src) {
        printf("%s", words[src]);
        return;
    }
    printPath(src, parent[dst], parent);
    printf(" -> %s", words[dst]);
}

static int findWord(const char *w) {
    for (int i = 0; i < wordCount; i++)
        if (strcmp(words[i], w) == 0) return i;
    return NOT_FOUND;
}

int main(void) {
    const char *filename = "sgb-words.txt";
    FILE *fp = fopen(filename, "r");
    if (!fp) return 1;

    while (wordCount < MAX_WORDS && fscanf(fp, "%5s", words[wordCount]) == 1)
        wordCount++;
    fclose(fp);

    buildGraphs();

    /* ----- Bài A(a) ----- */
    printf("Số thành phần liên thông của đồ thị G: %d\n", countComponents());

    char srcStr[32], dstStr[32], buf[32];
    int parent[MAX_WORDS];

    /* ----- Bài A(b) ----- */
    if (scanf("%31s %31s", srcStr, dstStr) == 2) {
        int src = findWord(srcStr);
        int dst = findWord(dstStr);
        if (src == NOT_FOUND || dst == NOT_FOUND) {
            printf("-1\n");
        } else {
            int dist = bfsUndirected(src, dst, parent);
            if (dist == NOT_FOUND) {
                printf("-1\n");
            } else {
                printPath(src, dst, parent);
                printf("\n");
            }
        }
    }

    /* ----- Bài B(a) ----- */
    kosaraju();
    printf("Số thành phần liên thông mạnh của đồ thị D: %d\n", sccCount);

    /* ----- Bài B(b) ----- */
    if (scanf("%31s", buf) == 1) {
        int u = findWord(buf);
        if (u == NOT_FOUND) {
            printf("-1\n");
        } else {
            printSccMembers(u);
        }
    }

    /* ----- Bài B(c) ----- */
    if (scanf("%31s %31s", srcStr, dstStr) == 2) {
        int src = findWord(srcStr);
        int dst = findWord(dstStr);
        if (src == NOT_FOUND || dst == NOT_FOUND) {
            printf("-1\n");
        } else {
            int dist = bfsDirected(src, dst, parent);
            if (dist == NOT_FOUND) {
                printf("-1\n");
            } else {
                printPath(src, dst, parent);
                printf("\n");
            }
        }
    }

    for (int i = 0; i < wordCount; i++) {
        free(forwardAdj[i].items);
        free(backwardAdj[i].items);
    }
    return 0;
}