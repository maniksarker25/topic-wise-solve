#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int>a(n);
        int zero = 0;
        int nonZero = 0;
        int mx = 0;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            if(a[i] != 0){
                nonZero++;
            }
            else{
                zero++;
            }
            mx = max(a[i],mx);
        }

        int ans;
        if(zero == 0){
            ans = 0;
        }
        else{
            if(nonZero >= zero -1){
                ans = 0;
            }
            else{
                if(mx == 1){
                    ans = 2;
                }
                else{
                    ans = 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}