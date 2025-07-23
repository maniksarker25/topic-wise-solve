#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        string p,h,n;
        cin >> p >> h;
        sort(begin(p),end(p));
        int n1 = size(p), n2 = size(h);
        
        bool isPosible = false;
        for(int i = 0;i<=n2 - n1;i++){
            n = h.substr(i,n1);
            sort(begin(n),end(n));
            if(n ==p){
                isPosible = true;
                break;
            }
        }
        if(isPosible){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}