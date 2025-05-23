#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    long long median = a[n / 2];
    long long total_cost = 0;

    for (int i = 0; i < n; i++) {
        total_cost += abs(a[i] - median);
    }

    cout << total_cost << endl;

    return 0;
}
