#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int h,n;
        cin >> h >> n;
        vector<int>a(n);
        vector<int>c(n);

        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        for(int i = 0;i<n;i++){
            cin >> c[i];
        }

        auto ok = [&](int mid){
            long long total = 0;
            for(int i = 0;i<n;i++){
                if(mid % c[i] > 0){
                    total += (a[i] * ((mid / c[i])+1));
                }
                else{
                    total += (a[i] * (mid / c[i]));
                }
            }

            return total >= h;
        };


        long long l = 1,r = h,mid,ans;
        while(l<=r){
            mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                r = mid -1;
            }
            else{
                l = mid +1;
            }
        }

        cout << ans <<endl;
    }
    
    return 0;
}