#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    if(n==1){
        return false;
    }

    for(int i =2;i*i<=n;i++){
        if(n %i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int d;
        cin >>d;
        int dv1 = 0 ,dv2 = 0;
        int a = d + 1;
        while(1){
            if(isPrime(a)){
                dv1 = a;
                break;
            }
            a++;
        }
        int b = dv1 + d;
        while(1){
            if(isPrime(b)){
                dv2= b;
                break;
            }
            b++;
        }

        cout << dv1 * dv2 <<endl;

    }
    
    return 0;
}