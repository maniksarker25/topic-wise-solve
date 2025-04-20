#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int q;
    cin >>q;
    while(q--){
        long long a,b,n,s;
        cin >> a >> b >> n >>s;
        int max_a_coins = min(a,s/n);
        int remain = s - (max_a_coins* n);
        if(remain <= b){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }

    return 0;
}