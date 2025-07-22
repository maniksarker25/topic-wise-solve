#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        int n,m;
        cin >> n >>m;
        long long a[n+3];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        a[n] = a[0];
        long long sum = 0;
        for(int i = 0;i<n;i++){
            sum += max(a[i],a[i+1]);
        }
        sum+=n;
        if(sum <=m){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }

    
    return 0;
}