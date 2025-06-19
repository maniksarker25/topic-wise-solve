#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    long long totalStudents = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        totalStudents += a[i];
    }

    auto ok = [&](long long councils) {
        long long studentNeed = 1LL * councils * k;
        long long availableStudents = 0;

        for (int i = 0; i < n; ++i) {
            availableStudents += min(1LL * a[i], 1LL * councils);
        }

        return availableStudents >= studentNeed;
    };

    long long l = 1, r = totalStudents / k,mid, ans = 0;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
