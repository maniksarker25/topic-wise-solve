// Black and White Stripe => https://codeforces.com/problemset/problem/1690/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<char>latters(n);

        for(int i =0;i<n;i++){
            cin >> latters[i];
        }

        int l = 0,r= 0;
        int ans = INT_MAX;
        int sum = 0;
        while(r<n){
            if(latters[r] == 'W'){
                sum++;
            }
            if(r - l + 1 == k){
                ans = min(ans,sum);
                if(latters[l] == 'W'){
                    sum--;
                }
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        cout << ans << endl;

    }

    return 0;
}