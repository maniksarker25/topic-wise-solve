#include <bits/stdc++.h>
using namespace std;

const int N = 40005;
vector<int>adj[N];
string s;
int ans;


pair<int,int>dfs(int u){
    int white = 0,black = 0;
    if(s[u-1] == 'W'){
      white++;
    }
    else{
        black++;
    }

    for(auto v : adj[u]){
        auto child = dfs(v);
        white+= child.first;
        black+= child.second;
    }

    if(white == black){
        ans++;
    }

    return {white,black};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1;i<=n;i++){
            adj[i].clear();
        }

        for(int i = 2;i<=n;i++){
            int p;
            cin >>p;
            adj[p].push_back(i);
        }

        cin >>s;
        ans = 0;
        dfs(1);

        cout << ans << endl;
    }
    
    return 0;
}