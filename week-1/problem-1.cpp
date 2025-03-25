// Countring => https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a>>b;
    if(a > b){
        cout << 0<<endl;
        return 0;
    }
    int diff = abs(a -b);
    cout << diff +1;
    return 0;
}