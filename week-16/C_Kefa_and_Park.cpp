#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> cats;
vector<vector<int>> adj;
int ans = 0;

void dfs(int u, int parent, int consecutive) {
    if (cats[u]) consecutive++;
    else consecutive = 0;

    if (consecutive > m) return;

    bool isLeaf = true;
    for (int v : adj[u]) {
        if (v != parent) {
            isLeaf = false;
            dfs(v, u, consecutive);
        }
    }

    if (isLeaf) ans++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    cats.resize(n + 1);
    adj.assign(n + 1, {});

    for (int i = 1; i <= n; i++) cin >> cats[i];

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1, 0);
    cout << ans << endl;

    return 0;
}
