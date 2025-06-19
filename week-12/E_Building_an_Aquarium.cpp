#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >>x;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        auto ok = [&](long long mid){
            long long total =0;
            for(int i = 0;i<n;i++){
                if(a[i] < mid){
                    total+= (mid - a[i]);
                }
            }
            return total <= x;
        };

        long long l = 1,r = 2e9,mid,ans;
        while(l <=r){
            mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                l = mid +1;
                
            }
            else{
                r = mid -1;
            }
        }

        cout << ans <<endl;
    }
    
    return 0;
}