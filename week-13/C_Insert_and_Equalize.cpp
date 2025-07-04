#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return __gcd(a,b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        sort(a.begin(), a.end());
        ll maxVal = a[n - 1];

        ll x = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == maxVal) break;
            x = gcd(x, maxVal - a[i]);
        }

        ll operation = 1;

        for (int i = 0; i < n; ++i) {
            operation += (maxVal - a[i]) / x;
        }

        ll last_value = maxVal - x;
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] != last_value) {
                break;
            }
            last_value -= x;
            ++operation;
        }

        cout << operation << endl;
    }

    return 0;
}
