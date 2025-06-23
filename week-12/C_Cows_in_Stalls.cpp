#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,k;
    cin >> n >> k;

    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }


    auto ok = [&](int mid){
        int count = 1;
        int lastPos = a[0];
        for(int i = 1;i<n;i++){
            if(a[i] - lastPos >=mid){
                count++;
                lastPos = a[i];
            }

            if(count >=k){
                return true;
            }
        }
        return false;
    };



    int l = 1,r = a[n -1] - a[0],mid,ans;
    while(l<=r){
        mid = l + (r-l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid +1;
        }
        else{
            r = mid -1;
        }
    }

    cout << ans <<endl;
    
    return 0;
}