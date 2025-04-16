#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        char grid[n][n];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin >> grid[i][j];
            }
        }
        int newGridRowColumn = n / k;
        char newGrid[newGridRowColumn][newGridRowColumn];
        for(int i = 0,m=0;i< n;i += k,m++){
            for(int j = 0,l=0;j< n;j+=k,l++){
                newGrid[m][l] = grid[i][j];
            }
        }

        for(int i = 0;i<newGridRowColumn;i++){
            for(int j = 0;j<newGridRowColumn;j++){
                cout << newGrid[i][j];
            }
            cout << endl;
        }

    }

    return 0;
}