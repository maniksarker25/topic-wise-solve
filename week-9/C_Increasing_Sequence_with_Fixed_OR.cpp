#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   int t;
   cin >>t;
   while(t--){
    long long n;
    cin >>n;
    int maxBit = __lg(n);
    deque<long long>ans;
    ans.push_front(n);
    for(int k = 0;k<= maxBit;k++){
        if((n>>k) & 1){
            long long value = n - (1LL << k);
            if(value > 0){
                ans.push_front(value);
            }
        }
    }
    cout << ans.size() << endl;
    for(auto val : ans){
        cout << val << ' ';
    }
    cout << endl;
    
   }
    return 0;
}