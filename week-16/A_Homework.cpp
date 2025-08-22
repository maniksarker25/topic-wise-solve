#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
        int n, m;
        string a, b, c;
        
        cin >> n >> a; 
        cin >> m >> b;
        cin >> c; 

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                a.insert(a.begin(), b[i]);
            } else {
                a.push_back(b[i]);
            }
        }

        cout << a << endl;
    }

    return 0;
}
