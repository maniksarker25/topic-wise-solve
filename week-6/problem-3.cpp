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
        cin >>n;
        vector<int>a(n);
        long long sum = 0;
        for(int i = 0;i<n;i++){
            cin >>a[i];
            sum += a[i];
        }

        if(sum < n){
            cout << "YES"<<endl;
        }
       else if(sum % n == 0){
            cout << "YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }

    return 0;
}