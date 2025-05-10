#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>even,odd;
      for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        if(x % 2 == 0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
      }
      if(even.size() == 0 || odd.size() == 0){
        cout << 0 << endl;
      }
      else{
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        long long mx = odd.back();
        int ans = 0;
        for(int i = 0;i<even.size();i++){
            if(even[i] > mx){
                ans = even.size()+1;
            }
            else{
                ans++;
                mx += even[i];
            }
        }
        cout << ans <<endl;
      }
    }

    return 0;
}