#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        map<long long, long long> mp;
        for(long long i = 0; i < n; i++) {
            long long a;
            cin >> a;
            mp[a]++;
        }

        vector<long long> v;
        for(auto [x, y] : mp) {
            if(y >= k) {
                v.push_back(x);
            }
        }

        if(v.empty()) {
            cout << -1 << endl;
            continue;
        }

        long long max_l = v[0], max_r = v[0];
        long long curr_l = v[0], curr_r = v[0];

        for(int i = 1; i < v.size(); i++) {
            if(v[i] == v[i - 1] + 1) {
                curr_r = v[i];
            } else {
                if((curr_r - curr_l) > (max_r - max_l)) {
                    max_l = curr_l;
                    max_r = curr_r;
                }
                curr_l = curr_r = v[i];
            }
        }

        if((curr_r - curr_l) > (max_r - max_l)) {
            max_l = curr_l;
            max_r = curr_r;
        }

        cout << max_l << ' ' << max_r << endl;
    }

    return 0;
}
