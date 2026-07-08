
#include <bits/stdc++.h>
using namespace std;

static const char* PALETTE[] = {
    "red", "green", "blue", "yellow", "orange", "purple", "cyan",
    "magenta", "brown", "pink", "gray", "lightblue", "lightgreen",
    "gold", "violet", "turquoise", "salmon", "khaki", "orchid", "coral"
};
static const int PALETTE_SIZE = sizeof(PALETTE) / sizeof(PALETTE[0]);

string colorName(int idx) { 
    if (idx >= 1 && idx <= PALETTE_SIZE) return PALETTE[idx - 1];
    return "color" + to_string(idx);
}

int n, m;
vector<vector<int>> adj;
vector<int> deg;
vector<int> color_; 
vector<int> edgeU, edgeV;

void greedyColorByOrder(const vector<int>& order) {
    for (int v : order) {
        vector<bool> used( 
            *max_element(deg.begin(), deg.end()) + 3, false);
        for (int u : adj[v]) {
            if (color_[u] != 0) {
                if (color_[u] >= (int)used.size()) used.resize(color_[u] + 1, false);
                used[color_[u]] = true;
            }
        }
        int c = 1;
        while (c < (int)used.size() && used[c]) c++;
        color_[v] = c;
    }
}

int main() {
    ifstream fin("dothi.txt");
    if (!fin) {
        cerr << "Khong the mo file dothi.txt\n";
        return 1;
    }
    fin >> n >> m;
    adj.assign(n + 1, {});
    deg.assign(n + 1, 0);
    color_.assign(n + 1, 0);
    edgeU.resize(m);
    edgeV.resize(m);

    for (int i = 0; i < m; i++) {
        int u, v;
        fin >> u >> v;
        edgeU[i] = u; edgeV[i] = v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++; deg[v]++;
    }
    fin.close();

    vector<bool> visited(n + 1, false);

    for (int s = 1; s <= n; s++) {
        if (visited[s]) continue;

        vector<int> comp;
        {
            queue<int> q;
            q.push(s);
            visited[s] = true;
            while (!q.empty()) {
                int u = q.front(); q.pop();
                comp.push_back(u);
                for (int v : adj[u]) {
                    if (!visited[v]) { visited[v] = true; q.push(v); }
                }
            }
        }

        int kC = 0;
        for (int v : comp) kC = max(kC, deg[v]);

        bool regular = true;
        for (int v : comp) if (deg[v] != kC) { regular = false; break; }

        if (!regular) {
            int v0 = -1;
            for (int v : comp) if (deg[v] < kC) { v0 = v; break; }
            vector<int> order;
            vector<bool> vis2(n + 1, false);
            queue<int> q;
            q.push(v0); vis2[v0] = true;
            while (!q.empty()) {
                int u = q.front(); q.pop();
                order.push_back(u);
                for (int v : adj[u]) {
                    if (!vis2[v]) { vis2[v] = true; q.push(v); }
                }
            }
            reverse(order.begin(), order.end());
            greedyColorByOrder(order);
        } else {
            greedyColorByOrder(comp);
        }
    }

    ofstream fout("dothitomau.dot");
    fout << "graph dothi\n{\n";
    for (int v = 1; v <= n; v++) {
        fout << "    " << v << " [fillcolor=" << colorName(color_[v])
             << ", style=filled];\n";
    }
    for (int i = 0; i < m; i++) {
        fout << "    " << edgeU[i] << " -- " << edgeV[i] << ";\n";
    }
    fout << "}\n";
    fout.close();

    cerr << "Da ghi ket qua vao dothitomau.dot\n";
    return 0;
}