// not found => https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
    char i = 'a';
    int flag = 1;
    while(i<='z'){
        if(s.find(i) >= s.size() || s.find(i) < 0){
            cout << i << endl;
            flag = 0;
            break;
        }
        i++;
    }
    if(flag){
        cout << "None" << endl;
    }
    return 0;
}
