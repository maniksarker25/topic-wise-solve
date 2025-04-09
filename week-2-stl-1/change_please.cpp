#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int change = 100 - x;
        int ans =( change / 10) * 10;
        cout << ans << endl;
    }

    return 0;
}