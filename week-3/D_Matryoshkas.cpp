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
        vector<long long>a(n);
        
        vector<pair<long long , long long>> b;
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        sort(a.begin(),a.end(),greater<long long>());
        
        for(int i=0; i<n;){
           int j=i;
            
            while(i<n && a[i]==a[j]){
                i++;
            }
            
            b.push_back({a[j], i-j});
        }     
        int ans=b[0].second; 
        for(int i=1; i<b.size(); i++){
            if(b[i].first+1==b[i-1].first){
                if(b[i].second > b[i-1].second){
                    ans += (b[i].second - b[i-1].second);
                }
            }else{
                ans=ans+b[i].second;
            }
        }
        
        cout<<ans<<endl;
        
    }

    return 0;
}