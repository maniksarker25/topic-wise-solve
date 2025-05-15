#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);

        int totalXOR = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalXOR ^= a[i];
        }

        int minXOR = totalXOR;
        for (int i = 0; i < n; ++i) {
            int candidate = totalXOR ^ a[i];
            minXOR = min(minXOR, candidate);
        }

        cout << minXOR << endl;
    }

    return 0;
}