#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int or_all = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            or_all |= a[i]; 
        }

        int available_bits = 0;
        for (int bit = 0; bit < 30; ++bit) {
            if ((or_all & (1 << bit)) == 0) {
                available_bits++;
            }
        }

        int result = (1 << available_bits) - 1;  
        cout << result << endl;
    }

    return 0;
}
