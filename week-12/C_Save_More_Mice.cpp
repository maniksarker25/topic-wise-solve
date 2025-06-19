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
        cin >> n >>k;
        vector<int>a(k);
        for(int i = 0;i<k;i++){
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        auto ok = [&](long long mid){
            long long total = 0;
            for(int i = 0;i<mid;i++){
                total+= (n - a[i]);
            }

            return total < n;
        };

        long long l = 1, r = k,mid , ans = 0;
        while(l <=r){
            mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid -1;
            }
        }
        cout << ans <<endl;
    }
    
    return 0;
}