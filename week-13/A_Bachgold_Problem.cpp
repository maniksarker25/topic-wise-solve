#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >>n;
    if(n <=3){
        cout << 1 << endl;
        cout << n <<endl;
    }
    else{
        if(n % 2 == 0){
            cout << n /2 <<endl;
            for(int i = 1;i<=n/2;i++){
                cout << 2 << " ";
            }
        }
        else{
            n -= 3;
            cout << (n/2) + 1 <<endl;
            for(int i = 1;i<=n/2;i++){
                cout << 2 << " ";
            }
            cout << 3 <<endl;
        }
    }
    return 0;
}