#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int l = 0,r=0;
    long long ans = 0;
    int uniqueCount = 0;
    vector<int>freq(100005,0);
    set<int>s;
    while(r <n){
       if(freq[a[r]] == 0){
        uniqueCount++;
       }
       freq[a[r]]++;

       if(uniqueCount <= k){
        ans += (r-l+1);
       }
       else{
        while(uniqueCount > k){
            freq[a[l]]--;
            if(freq[a[l]] == 0){
                uniqueCount--;
            }
            l++;
        }
        if(uniqueCount <= k){
            ans += (r-l+1);
           }
       }
       r++;
    }

    cout << ans <<endl;
    
    return 0;
}