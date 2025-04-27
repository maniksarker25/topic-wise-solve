#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>a(k);
        for(int i = 0;i<k;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        int ans = 0;
        for(int i = 1;i<k;i++){
            if(a[i] > 1){
                ans += (a[i] -1) + a[i];
            }
            else{
                ans++;
            }
        }
        cout << ans <<endl;
    }


    return 0;
}