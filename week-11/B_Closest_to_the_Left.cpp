#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
 
    int n,k;
    cin >>n >>k;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    while(k--){
        int l = 0,r=n-1,ans= 0;
        int key;
        cin >> key;
        while(l <= r){
            int mid = (l+r)/2;
            if(a[mid] <= key){
                ans = mid + 1;
                l = mid +1;
            }
            else{
                r = mid -1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}