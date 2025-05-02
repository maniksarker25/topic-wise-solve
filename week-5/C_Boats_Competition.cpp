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
        vector<int>w(n);
        for(int i = 0;i<n;i++){
            cin >> w[i];
        }
        sort(w.begin(),w.end());
        int ans = 0;
        for(int x = 1;x<= 2 *n;x++){
            int count = 0;
            for(int i = 0,j=n-1;i<j;){
                if(w[i] + w[j] > x){
                    j--;
                }
                else if(w[i] + w[j] < x){
                    i++;
                }
                else{
                    count++;
                    i++;
                    j--;
                }
            }
            ans = max(ans,count);
        }
        cout << ans <<endl;
    }
    
    return 0;
}