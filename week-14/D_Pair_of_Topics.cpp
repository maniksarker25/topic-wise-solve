#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
    }

    sort(c.begin(), c.end());

    long long goodPairs = 0;

    for (int i = 0; i < n; i++) {

        if (c[i] <= 0) continue;

        int idx = upper_bound(c.begin(), c.begin() + i, -c[i]) - c.begin();
        goodPairs += (i - idx);
    }

    cout << goodPairs << endl;
    
    return 0;
}