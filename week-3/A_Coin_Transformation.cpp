// A. Coin Transformation => https://codeforces.com/problemset/problem/2043/A

#include <bits/stdc++.h>
using namespace std;



map<long long,long long>dp;

int totalCoins(long long n){
        if(n <4){
            return 1;
        }
        if(dp.find(n) != dp.end()){
            return dp[n];
        }
        int total = 2 * totalCoins(n/4);
        dp[n] = total;
        return total;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >>t;
    while(t--){
      long long  n;
      cin >> n;
      long long ans = totalCoins(n);
      cout << ans <<endl;
    }
    
    return 0;
}