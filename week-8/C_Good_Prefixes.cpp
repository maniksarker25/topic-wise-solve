#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >>a[i];
        }

        vector<long long>pre_sum(n);
        pre_sum[0] = a[0];
        for(int i = 1;i<n;i++){
            pre_sum[i] = pre_sum[i-1] + a[i];
        }
        int mx = 0;
        int good_prefix = 0;
        for(int i = 0;i<n;i++){
            mx = max(mx,a[i]);
            if((pre_sum[i] - mx) == mx){
                good_prefix++;
            }
        }

        cout << good_prefix <<endl;
    }
    
    return 0;
}