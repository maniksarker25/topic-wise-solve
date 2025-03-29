// Colourblindness => https://codeforces.com/problemset/problem/1722/B


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char a[2][n];
        for(int i = 0;i<2;i++){
            for(int j = 0;j<n;j++){
                cin >> a[i][j];
            }
        }
        bool isSame = true;
        for(int i = 0;i<1;i++){
            for(int j = 0;j<n;j++){
                if(a[i][j] == 'G' || a[i][j] == 'B'){
                    if(a[i+1][j] != 'B' && a[i+1][j] != 'G'){
                        isSame = false;
                    }
                }
                else if(a[i][j] != a[i+1][j]){
                    isSame = false;
                }
            }
        }

        if(isSame){
            cout << "YES" << endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
    return 0;
}