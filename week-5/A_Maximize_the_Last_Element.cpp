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
        cin >> n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        if(n==1){
            cout << a[0]<<endl;
        }
        else{
            int mx = 0;
            for(int i =0;i<n;i++){
                if(i % 2 == 0){
                    mx = max(mx,a[i]);
                }
            }
            cout << mx <<endl;
        }
    }
    
    return 0;
}