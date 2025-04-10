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
        set<int>permutation;
        for(int j = 0;j<n;j++){
        for(int i = 0;i<n-1;i++){
            int num;
            cin >> num;
            permutation.insert(num);
        }
      }

      for(auto val : permutation){
        cout << val <<' ';
      }
      
      cout << endl;

    }

    return 0;
}