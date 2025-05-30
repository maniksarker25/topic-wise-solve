#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    set<int>s;
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(s.find(a[i]) != s.end()){
            int size = s.size();
            ans = max(ans,size);
            s.clear();
        }
        s.insert(a[i]); 
    }
    int size = s.size();
    ans = max(ans,size);
    cout << ans << endl;
    
    return 0;
}