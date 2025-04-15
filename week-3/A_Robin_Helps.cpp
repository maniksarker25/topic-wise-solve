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
        cin >> n>>k;
        int robin_has = 0;
        int robin_gives = 0;
        for(int i =1;i<=n;i++){
            int a;
            cin >> a;
            if(a >= k){
                robin_has += a;
            }
            else if(a == 0 && robin_has > 0){
                robin_has--;
                robin_gives++;
            }
        }
        cout << robin_gives << endl;
    }

    return 0;
}