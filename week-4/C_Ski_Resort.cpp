// Ski Resort => https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin >> n >> k >>q;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >>a[i];
        }
        int l = 0,r=0;
        long long ans =0;
        while(l < n && r < n){
            if(r -l + 1 >= k && a[r] <= q){
                ans += (r-l+1) -k + 1;
                r++;
            }
            else if(a[r] > q){
                l = r +1;
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