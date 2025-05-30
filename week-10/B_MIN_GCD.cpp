#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
 
        if (n > 1 && arr[0] == arr[1]) {
            cout << "YES" << endl;
            continue;
        }
 
        if (arr[0] == 1) {
            long long g = 0;
            for (int i = 1; i < n; i++) {
                g = __gcd(arr[i], g);
            }
            if (g == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }
 
        vector<long long> v;
        for (int i = 1; i < n; i++) {
            if (arr[i] % arr[0] == 0) {
                v.push_back(arr[i]);
            }
        }
 
        sort(v.begin(), v.end());
        if (v.size() < 2) {
            cout << "NO" << endl;
            continue;
        }
 
        long long g = 0;
        for (auto x : v) {
            g = __gcd(g, x);
        }
 
        if (g != arr[0]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}