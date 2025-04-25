#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >>t;
    while(t--){
        long long n,c;
        cin >> n >>c;
        multiset<long long>mls;
        for(int i = 1;i<=n;i++){
            int x;
            cin >> x; 
            mls.insert(x + i);
        }
        long long count= 0;
        for(auto val : mls){
            if(c >= val){
                count++;
                c -= val;
            }
            else{
                break;
            }
        }
        cout << count << endl;

        
    }
    
    return 0;
}