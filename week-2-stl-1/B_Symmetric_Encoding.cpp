//Symmetric Encoding => https://codeforces.com/problemset/problem/1974/B

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
        set<char>uniquea_str;
        vector<char>chars(n);
        for(int i = 0;i<n;i++){
            cin >> chars[i];
            uniquea_str.insert(chars[i]);
      
        }

        vector<char> v(uniquea_str.begin(), uniquea_str.end());
        map<char,char>mp;

        for(int i = 0,j=v.size()-1;i <= j;i++,j--){
            mp[v[i]] = v[j];
            mp[v[j]] = v[i];
        }

        for(int i = 0;i<n;i++){
           chars[i] = mp[chars[i]];
        }
        for(int i = 0;i<n;i++){
            cout << chars[i];
      
        }
        cout << endl;
        
    }

    return 0;
}