#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> result;

        for (int k = 1; k <= 18; k++) {
            long long d = 1;
            for (int i = 0; i < k; i++) {
                d *= 10;
            }
            d += 1;

            if (d > n) break;

            if (n % d == 0) {
                long long x = n / d;
                result.push_back(x);
            }
        }

        if (result.empty()) {
            cout << 0 <<endl;
        } else {
            cout << result.size() << endl;
            sort(result.begin(), result.end());
            for (int i = 0; i < result.size(); i++) {
                cout << result[i];
                if (i != result.size() - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
