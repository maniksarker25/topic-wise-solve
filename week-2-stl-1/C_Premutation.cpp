// Premutation => https://codeforces.com/problemset/problem/1790/

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
      cin >> n;
      vector<vector<int>> sequences(n, vector<int>(n - 1));
      map<int,int>mp;
      for (int i = 0; i < n; ++i) {
          for (int j = 0; j < n - 1; ++j) {
              cin >> sequences[i][j];
              if(j == 0){
                mp[sequences[i][j]] = mp[sequences[i][j]] + 1;
              }
          }
      }

      int mx = 0;
      int value = 0;
      for(auto it : mp){
       if(it.second > mx){
        mx = it.second;
        value = it.first;
       }
      }
      

      int premutation_index = 0;
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if(j == 0 && sequences[i][j] != value){
                premutation_index = i;
            }
        }
    }

    vector<int>ans = sequences[premutation_index];

    ans.insert(ans.begin(),value);

    for(int i = 0;i<ans.size();i++){
      cout << ans[i] << ' ';
    }
    cout << endl;

    }

    return 0;
}