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
    sort(a.begin(),a.end());

    int q;
    cin >>q;
    while(q--){
        int m;
        cin >>m;
        int l = 0,r=n-1,ans = 0;
        while(l<=r){
            int mid = l + (r-l) /2;
            if(a[mid] <= m){
                ans = mid + 1;
                l = mid + 1;
            }
            else{
                r = mid -1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}