#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int days = 0;
    int socks = n;

    while (socks > 0) {
        days++;
        socks--;
        if (days % m == 0) {
            socks++;
        }
    }

    cout << days << endl;
    return 0;
}
