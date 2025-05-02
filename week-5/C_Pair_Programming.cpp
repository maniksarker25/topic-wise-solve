#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        vector<int> ans;
        int i = 0, j = 0;
        bool flag = true;
        while (i < n || j < m) {
            bool isPossible = false;

            if (i < n && (a[i] == 0 || a[i] <= k)) {
                ans.push_back(a[i]);
                if (a[i] == 0) k++;
                i++;
                isPossible = true;
            } else if (j < m && (b[j] == 0 || b[j] <= k)) {
                ans.push_back(b[j]);
                if (b[j] == 0) k++;
                j++;
                isPossible = true;
            }

            if (!isPossible) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << -1 << endl;
        } else {
            for (auto val : ans) {
                cout << val << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
