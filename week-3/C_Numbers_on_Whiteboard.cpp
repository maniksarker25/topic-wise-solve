#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> chosen;
        int current = n;
        for (int i = n - 1; i >= 1; i--) {
            chosen.push_back({current, i});
            current = (current + i + 1) / 2;
        }

        cout << current << endl;
        for (auto [a, b] : chosen) {
            cout << a << " " << b << endl;
        }
    }

    return 0;
}