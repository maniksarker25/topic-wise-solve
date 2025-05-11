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
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >>a[i];
        }

        int descraseCount = 0;
        for (int i = 0; i < n; i++) {
            int nextIndex = (i + 1) % n;
            if (a[i] > a[nextIndex]) {
                descraseCount++; 
            }
        }

        if(descraseCount <= 1){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }

    }
    
    return 0;
}