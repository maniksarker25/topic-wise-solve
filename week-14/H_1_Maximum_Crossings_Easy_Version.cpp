#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> v;
        ll a[n];
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            v.push_back(a[i]);
        }

        sort(v.begin(), v.end());
        ll sum = 0;

        for(ll i = 0; i < n; i++) {
            if(a[i] == *(v.rbegin())) {
                ll x = v.size();
                sum += (x - 1);
                v.pop_back();
                continue;
            }
            ll x = lower_bound(v.begin(), v.end(), a[i] + 1) - v.begin();
            sum += (x - 1);
            v.erase(v.begin() + x - 1);
        }

        cout << sum << endl;
    }
    
    return 0;
}
