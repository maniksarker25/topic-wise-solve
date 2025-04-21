#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        bool isPositive = true;
        int totalNegSub = 0;
        for(int i = 0;i<n;i++){
            if(isPositive && a[i] <0){
                totalNegSub++;
                isPositive = false;
            }
            if(a[i] < 0){
                a[i] = a[i] * -1;
            }
           else if(a[i] > 0 && !isPositive){
                isPositive = true;
            }
           
        }
        long long sum = 0;
        for(int i = 0;i<n;i++){
           sum += a[i];
        }
        cout << sum << " " << totalNegSub << endl;
    }

    return 0;
}