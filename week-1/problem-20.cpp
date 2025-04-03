// A. New World, New Me, New Array => https://codeforces.com/problemset/problem/2072/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) { 
        int n, k, p;
        cin >> n >> k >> p;

        if (k < -n * p || k > n * p) {
            cout << "-1" << endl;; 
        } else {
            int result = (abs(k) + p - 1) / p;
            cout << result <<endl;
        }
    }

    return 0;
}
