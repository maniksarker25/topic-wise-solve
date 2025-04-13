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
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        int mn = 1, mx = n;
        bool found = false;
        while (r - l + 1 >= 3) {
            if (a[l] == mn || a[l] == mx) {
                if (a[l] == mn) {
                    mn++;
                }
                if (a[l] == mx){
                    mx--;
                }
                l++;
            } else if (a[r] == mn || a[r] == mx) {
                if (a[r] == mn){
                    mn++;
                }
                if (a[r] == mx){
                    mx--;
                }
                r--;
            } else {
                cout << l + 1 << ' ' << r + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found){
            cout << -1 << endl;
        }
    }

    return 0;
}
