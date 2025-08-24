#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> g(n);
        for(int i=0;i<n;i++) cin >> g[i];

        long long gmin = *min_element(g.begin(), g.end());
        long long sum = 0;
        for(int i=0;i<n;i++) sum += g[i];

        long long ans = sum + gmin*(n-2);
        cout << ans << "\n";
    }

    return 0;
}
