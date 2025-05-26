#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<long long>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        if(a[0]==1){
            a[0] = 2;
        }
        for(int i = 1;i<n;i++){
            if(a[i] == 1 && i != n-1){
               a[i]++; 
            }
            if(a[i] % a[i-1] == 0){
                a[i]++;
            }
        }

        for(auto val : a){
            cout << val << ' ';
        }
        cout << endl;
    }
    
    return 0;
}