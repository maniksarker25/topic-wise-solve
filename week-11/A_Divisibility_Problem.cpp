#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int a,b;
        cin >> a>>b;
        if(a % b == 0){
            cout << 0 << endl;
        }
        else if(a < b){
            cout << b - a << endl;
        }
        else{
            int d = (a / b) + 1;
            int ans = (d *b) - a;
            cout << ans <<endl;
        }
    }
    
    return 0;
}