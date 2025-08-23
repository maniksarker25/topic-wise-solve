#include <bits/stdc++.h>
using namespace std;

int grid[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

int dfs(int si, int sj)
{
    visited[si][sj] = true;
    int volume = grid[si][sj];
    for(int i=0;i<4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] > 0){
            volume += dfs(ci, cj);
        }
    }
    return volume;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >>t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        memset(visited,false,sizeof(visited));
        int maxVolume = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] > 0) {
                    maxVolume = max(maxVolume, dfs(i, j));
                }
            }
        }
        
        cout << maxVolume << endl;
        
    }

    return 0;
}