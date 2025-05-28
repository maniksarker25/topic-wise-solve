#include <bits/stdc++.h>
using namespace std;



long long getPrime(long long n){
    if (n % 2 == 0) return 2;
    for (long long i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0) return i;
    }
    return n;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin >> l >>r;
        if(r<=3){
            cout << -1 <<endl;
            continue;
        }
        else{
            if(l < r){
                if(r % 2 != 0){
                    r--;
                }
                cout << 2 << ' ' << r -2 << endl;
            }
            else{
                long long prime = getPrime(l);
                if(prime == l){
                    cout << -1 <<endl;
                }
                else{
                    cout << prime << ' ' << l -prime << endl;
                }
            }
        }
    }

    return 0;
}