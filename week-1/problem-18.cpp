// FizzBuzz Remixed => https://codeforces.com/problemset/problem/2070/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int fiftenCycle = (n/15) * 3;
        int remainder = n % 15;
        int extra = 0;
        for(int i = 0;i<=remainder;i++){
            if(i % 3 == i % 5){
                extra++;
            }
        }

        cout << fiftenCycle + extra << endl;
    }   
    return 0;
}