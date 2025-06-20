#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long h;
        int n;
        cin >> h >> n;
        vector<long long> a(n), c(n);
        long long totalDamageOnces = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalDamageOnces += a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        if (totalDamageOnces >= h) {
            cout << 1 << endl;
            continue;
        }

        long long l = 1, r = 1e18, ans = -1;
        auto ok = [&](long long mid) {
            __int128 totalDamage = 0;  
            for (int i = 0; i < n; i++) {
                long long uses = (mid - 1) / c[i] + 1;
                totalDamage += (__int128) a[i] * uses;
                if (totalDamage >= h) return true;
            }
            return false;
        };

        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (ok(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
