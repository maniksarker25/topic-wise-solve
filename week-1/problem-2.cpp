// find multiple => https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int a,b,c;
    cin >> a >> b >>c;
    int flag = 0;
    for(int i = a;i<=b;i++){
        if(i % c == 0){
            cout << i << endl;
            flag = 1;
            break;
        }
    }
   if(flag == 0){
    cout << -1 << endl;
   }
    
    return 0;
}