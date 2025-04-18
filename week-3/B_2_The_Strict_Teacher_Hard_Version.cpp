// B2. The Strict Teacher (Hard Version) => https://codeforces.com/problemset/problem/2005/B2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >>t;
    while(t--){
        int n,m,q;
        cin >> n >>m>>q;
        vector<int>teachers(m);
        for(int i = 0;i<m;i++){
            cin >> teachers[i];
        }

        sort(teachers.begin(),teachers.end());

        while(q--){
            int d;
            cin >> d;
            if(d < teachers[0]){
                int ans = teachers[0] - 1;
                cout << ans << endl;
                continue;
            }
            if(d > teachers[m-1]){
                int ans = n - teachers[m-1];
                cout << ans << endl;
                continue;
            }

            auto it = lower_bound(teachers.begin(),teachers.end(),d);
            auto it2 = it;
            it2--;
            int left = *it2, right = *it;
            int mid = (right + left) / 2;
            int ans = min(abs(mid-left),abs(mid-right));
            cout << ans << endl;
            
        }
    }

    return 0;
}