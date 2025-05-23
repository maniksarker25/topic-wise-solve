#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = s.length();
    int index = 0;

    for (int i = 1; i < len; i++) {
        index += pow(2, i); 
    }

    for (int i = 0; i < len; i++) {
        if (s[i] == '7') {
            index += pow(2, len - i - 1);
        }
    }

    cout << index + 1 << endl;
        
    return 0;
}