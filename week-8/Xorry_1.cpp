#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int x;
        cin >>x;
        for(int b = 0;b<=x;b++){
            int a = b ^ x;
            if(a<=b && a>=0 && b <=x){
                cout << a << " " << b << endl;
                break;
            }
        }
    }
    
    return 0;
}