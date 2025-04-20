// Decode String => https://codeforces.com/problemset/problem/1729/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string t;
        cin >> t;
        string decoded_string = "";
        int i = n -1;
        while(i >= 0){
            if(t[i] == '0'){
                int num = (t[i-2] - '0') * 10 + (t[i-1] - '0');
                char ch = 'a' +num -1;
                decoded_string += ch;
                i -= 3;
            }
            else{
                int num = t[i] - '0';
                char ch = 'a' + num -1;
                decoded_string += ch;
                i--;
            }
        }
        reverse(decoded_string.begin(),decoded_string.end());
        cout << decoded_string << endl;
    }

    return 0;
}