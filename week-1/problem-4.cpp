// four digit => https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    string str = to_string(n);
    int zero_need = 4 -str.length();
    str.insert(0,zero_need,'0');
    cout << str << endl;
    return 0;
}