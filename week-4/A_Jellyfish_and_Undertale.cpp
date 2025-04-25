#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
       long long a,b,n;
       cin >> a >>b >>n;
       vector<long long>tools(n);
       long long total = b;
       for(int i = 0;i<n;i++){
        cin >> tools[i];
        if(tools[i] + 1 <= a){
            total += tools[i];
        }
        else{
            total += a -1;
        }
       }
       cout << total <<endl;
    }
 
    return 0;
}