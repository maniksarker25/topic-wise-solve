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
        cin >>n >>k;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        int mxLen = 1;
        int l = 0;
        for(int r = 1;r <n;r++){
            if(a[r] -a[r-1] > k){
                l = r;
            }
            mxLen = max(mxLen,r-l +1);
        }
        cout << n - mxLen << endl;
    }
    
    return 0;
}