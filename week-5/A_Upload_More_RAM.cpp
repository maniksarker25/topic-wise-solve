#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n >>k;
        if(n == 1){
            cout << n <<endl;
        }
        else{
            cout << n * k - (k-1) <<endl;
        }
    }

    return 0;
}