// Biscuit generator => https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int a,b,t;
    cin >> a>>b>>t;
    int time = a;
    double totalTime = t + 0.5;
    int biscuit_generated = 0;
    for(int i = 2;time <= totalTime;i++){
        biscuit_generated += b;
        time  = a * i;
    }
    cout << biscuit_generated << endl;
    return 0;
}
