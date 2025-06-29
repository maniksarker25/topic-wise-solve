#include <bits/stdc++.h>
using namespace std;


bool isPrime(long long n){
    if(n==1){
        return false;
    }
    for(int i= 2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


bool isPerfectSuare(long long n){
    long long x = sqrtl(n);
    return (x *x ) ==n;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >>n;
    for(int i = 0;i<n;i++){
        long long x;
        cin >>x;
        if(isPerfectSuare(x) && isPrime(sqrtl(x))){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }

    }

    
    return 0;
}