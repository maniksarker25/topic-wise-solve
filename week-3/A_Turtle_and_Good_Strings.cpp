//  Turtle and Good Strings => https://codeforces.com/problemset/problem/2003/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(s[0] ==  s[n-1]){
            cout << "NO"<<endl;
        }
        else{
            cout << "YES"<<endl;
        }
    }

    return 0;
}