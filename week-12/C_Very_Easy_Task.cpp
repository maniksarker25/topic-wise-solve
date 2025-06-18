#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](long long time){
        if (time < min(x, y)) return false;
        time -= min(x, y);
        long long totalCopy = (time / x) + (time / y) + 1;
        return totalCopy >= n;
    };

    long long l = 0, r = 1LL * n * min(x, y), mid, ans;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
