#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n + 2);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<tuple<int, int, ll>> operations(m + 1);
    for (int i = 1; i <= m; i++) {
        int l, r;
        ll d;
        cin >> l >> r >> d;
        operations[i] = {l, r, d};
    }

    vector<ll> op_count(m + 2, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        op_count[x]++;
        op_count[y + 1]--;
    }

    for (int i = 1; i <= m; i++) {
        op_count[i] += op_count[i - 1];
    }

    vector<ll> diff(n + 3, 0);
    for (int i = 1; i <= m; i++) {
        auto [l, r, d] = operations[i];
        ll times = op_count[i];
        diff[l] += d * times;
        diff[r + 1] -= d * times;
    }

    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
        a[i] += diff[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
