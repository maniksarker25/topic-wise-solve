#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int>adj[N];
int subtree[N];
int n, ans = 0;


int dfs(int u,int parent){
    int size = 1;
    for(int v : adj[u]){
        if(v==parent){
            continue;
        }
        size+=dfs(v,u);
    }

    subtree[u] = size;
    if(u != 1 && size % 2 == 0){
        ans++;
    }

    return size;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n;
    for(int i = 0;i<n-1;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    if(n % 2 != 0){
        cout << -1 << endl;
        return 0;
    }

    dfs(1,-1);
    cout << ans << endl;

    
    return 0;
}