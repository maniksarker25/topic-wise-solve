#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        int firstPosInx = -1;
        long long ans = 0;
        for(int i = 0;i<n;i++){
            cin >>a[i];
            if(a[i] > 0 && firstPosInx == -1){
                firstPosInx = i;
            }
        }


        if(firstPosInx == -1 || firstPosInx == n-1){
            cout << 0 << endl;
            continue;
        }
        for(int i = firstPosInx;i<n-1&& i>=0;i++){
            ans+=a[i];
            if(a[i] == 0){
                ans++;
            }
        }

        cout << ans <<endl;

    }
    
    return 0;
}