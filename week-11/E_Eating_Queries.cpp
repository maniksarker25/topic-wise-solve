#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin >> n >>q;
        vector<int>a(n+1),prefix_sum(n+1);
        for(int i = 1;i<=n;i++){
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        for(int i = 1;i<=n;i++){
            prefix_sum[i] = prefix_sum[i-1] + a[i-1];
        }

        while(q--){
            int k,ans =-1;
            cin >>k;
            auto it = lower_bound(prefix_sum.begin(),prefix_sum.end(),k);
            if(it != prefix_sum.end()){
                ans = it - prefix_sum.begin();
            }
        
            cout << ans << endl;
        }

    }
    
    return 0;
}