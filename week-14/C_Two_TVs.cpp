#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool has_odd = false;
        int total = 0;

        for (int i = 0; i < n; ++i) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;

            int dist = abs(a - c) + abs(b - d);
            total += dist;

            // If any move has odd distance, special rule applies
            if (dist % 2 == 1) {
                has_odd = true;
            }
        }

        // If any movement has odd manhattan distance, result = 1
        if (has_odd) {
            cout << 1 << '\n';
        } else {
            // Otherwise, total/2 is minimum greedy steps needed
            cout << total / 2 << '\n';
        }
    }

    return 0;
}
