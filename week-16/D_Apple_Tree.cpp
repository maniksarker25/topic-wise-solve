#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
vector<int> adj[MAXN];
vector<long long> leafCount;

void dfs(int node, int parent) {
    bool isLeaf = true;
    leafCount[node] = 0;
    for (int child : adj[node]) {
        if (child != parent) {
            isLeaf = false;
            dfs(child, node);
            leafCount[node] += leafCount[child];
        }
    }
    if (isLeaf) leafCount[node] = 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) adj[i].clear();
        leafCount.assign(n + 1, 0);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, -1);

        int q;
        cin >> q;
        while (q--) {
            int x, y;
            cin >> x >> y;
            cout << leafCount[x] * leafCount[y] << endl;
        }
    }

    return 0;
}
