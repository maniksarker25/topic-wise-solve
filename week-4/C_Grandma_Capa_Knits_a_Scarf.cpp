#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = INT_MAX;
        for(int i = 'a';i<='z';i++){
            int change = 0;
            int l =0,r = n-1;
            while(l <= r){
                if(s[l] != s[r]){
                    if(s[l] == i){
                        change++;
                        l++;
                    }
                    else if(s[r] == i){
                        change++;
                        r--;
                    }
                    else{
                        change = INT_MAX;
                        break;
                    }
                }
                else{
                    r--;
                    l++;
                }
            }
            ans = min(ans,change);
        }
       if(ans == INT_MAX){
        cout << -1 <<endl;
       }
       else{
        cout << ans <<endl;
       }
    }

    return 0;
}