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
        map<char,int>mp;
        for(int i = 0;i<n *4;i++){
            char ch;
            cin >> ch;
            if(ch != '?'){
                mp[ch]++;
            }
        }
        int ans = 0;
        for(auto [x,y]:mp){
            if(y >n){
                ans+= n;
            }
            else{
                ans+=y;
            }
        }
        cout << ans <<endl;
    }

    return 0;
}