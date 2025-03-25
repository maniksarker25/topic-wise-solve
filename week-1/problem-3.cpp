// Button => https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << a *2<< endl;
    }   
    else if(a > b){
        cout << a + (a -1) << endl;
    }
    else{
        cout << b + (b-1)<< endl;
    }
    return 0;
}