#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if (m <= n && (n - m) % 2 == 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
        }
    
    return 0;
}