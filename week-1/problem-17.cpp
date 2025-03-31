// The Play Never Ends = > https://codeforces.com/problemset/problem/2071/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        if(k % 3 == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }    
    return 0;
}
