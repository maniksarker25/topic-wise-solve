#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >>s;
        vector<long long int>flipNums;
        long long int ans = 0;
        for(long long int i = 0;i<n;i++){
            if(s[i] == 'L'){
                ans += i;
                flipNums.push_back((n-i-1)-i);
            }
            else{
                ans+=(n-i-1);
                flipNums.push_back(i-(n-i-1));
            }
        }
        sort(flipNums.rbegin(),flipNums.rend());
        for(long long int k = 1;k<=n;k++){
            if(flipNums[k-1]>0){
                ans+= flipNums[k-1];
                cout << ans << ' ';
            }
            else{
                cout << ans<<' ';
            }
   
        }
        cout << endl;
    }
    return 0;
}