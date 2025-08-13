#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int>vec(n);
        for(int i =0;i<n;i++){
            cin >> vec[i];
        }

        map<int,int>mp;
        for(int i = 0;i<n;i++){
            int b;
            cin >>b;
            mp[vec[i]] = b;

        }

        sort(vec.begin(),vec.end());
        for(int i = 0;i<n;i++){
            cout << vec[i] << ' ';
        }

        cout << endl;
        for(int i = 0;i<n;i++){
            cout << mp[vec[i]] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}