// how many => https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int s,t;
    cin >> s>>t;
    int mx = max(s,t);
    int count = 0;
    for(int i =0;i<=mx;i++){
        for(int j = 0;j<=mx;j++){
            for(int k = 0;k<=mx;k++){
                if(i+j+k > s || i * j * k > t){
                    break;
                }
                count++;

            }
        }
    }
    cout << count << endl;
    return 0;
}