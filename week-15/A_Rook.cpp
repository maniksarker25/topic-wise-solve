#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    string s = "abcdefgh";
    while(t--){
        string str;
        cin >> str;
        char ch = str[0];
        int n = str[1] - '0';
        for(int i = 0;i<8;i++){
            if(s[i] != ch){
                cout << s[i] << n << endl;
            }

        }
        for(int i = 1;i<=8;i++){
            if(n != i ){
                cout << ch << i << endl;
            }
        }
    }
    
    return 0;
}