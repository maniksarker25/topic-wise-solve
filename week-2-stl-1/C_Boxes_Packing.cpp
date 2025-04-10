#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >>n;
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        mp[x] = mp[x]+1;
    }

    int mx = 0;
    for(auto it : mp){
        mx = max(mx,it.second);
    }

    cout << mx <<endl;
    
    return 0;
}