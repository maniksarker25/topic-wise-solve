#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >>t;
    while(t--){
        int a,b,c;
        cin >> a >>b >>c;
        for(int i = 1;i<=5;i++){
            if(a <=b && a <=c){
                a++;
            }
            else if(b <= a&& b <= c){
                b++;
            }
            else{
                c++;
            }
            
        }
        int ans = a * b * c;
        cout << ans <<endl;
    }

    return 0;
}