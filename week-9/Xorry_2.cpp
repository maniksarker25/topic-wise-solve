#include <bits/stdc++.h>
using namespace std;


bool kth_bit_is_on(int n,int k){
    return ((n>>k) & 1);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int x;
        cin >>x;
        int msb = __lg(x), b = (1 << msb),a=(x^b),sum =b,count=0;

        for(int k = 0;k<=msb;k++){
            if(!kth_bit_is_on(a,k) && !kth_bit_is_on(b,k) && (sum + (1 << k)) <= x){
                count++;
                sum += (1 << k);
            }

        }

        int ans = (1 << count);
        cout << ans <<endl;
    }
    
    return 0;
}