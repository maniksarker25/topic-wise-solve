#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int n;
    cin >> n;
    vector<int> p(n + 1), result(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        result[p[i]] = i;
    }

    for (int i = 1; i <= n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}