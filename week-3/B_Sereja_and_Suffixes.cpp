//  Sereja and Suffixes => https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1);
    for(int i = 1;i<=n;i++){
        cin >> a[i];
        
    }
    vector<int>ans(n+1);
    set<int>s;
    for(int i = n;i>=1;i--){
        s.insert(a[i]);
        ans[i] = s.size();
    }

    for(int i = 1;i<=m;i++){
        int l;
        cin >> l;
        cout << ans[l] << endl;
    }

    return 0;
}