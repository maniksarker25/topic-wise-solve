#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        long long a,b;
        cin >>a>>b;
        if(b==1){
            cout << "NO"<<endl;
        }
        else{
            cout << "YES"<<endl;
            long long x = a*b;
            long long y = a;
            long long z = x + y;
            cout << x << " " << y << " " << z << endl;
        }
    }
    
    return 0;
}