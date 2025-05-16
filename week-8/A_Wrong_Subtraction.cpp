#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,k;
    cin >> n >>k;
    for(int i =1;i<=k;i++){
        int lastDigit = n % 10;
        if(lastDigit == 0){
            n = n / 10;
        }
        else{
            n -= 1;
        }
    }

    cout << n <<endl;
    
    return 0;
}