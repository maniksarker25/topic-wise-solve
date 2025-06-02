#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    vector<long long>prefix_sum(n);
    prefix_sum[0] = a[0];
    for(int i=1;i<n;i++){
        prefix_sum[i] = prefix_sum[i-1] + a[i];
    }

    int q;
    cin >>q;
    while(q--){
        int m;
        cin >>m;
        int l = 0,r =n-1,ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if (prefix_sum[mid] >= m) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans +1  << endl;
    }
    
    return 0;
}