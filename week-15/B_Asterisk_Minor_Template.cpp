#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        bool found = false;
        string templateStr = ""; 

        if (a == b) {
            cout << "YES" << endl;
            cout << a << endl;
            continue; 
        }

        if (a[0] == b[0]) {
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }

        if (a[a.length() - 1] == b[b.length() - 1]) {
            cout << "YES" << endl;
            cout << "*" << a[a.length() - 1] << endl;
            continue;
        }

        for (int i = 0; i < a.length() - 1 && !found; i++) {
            for (int j = 0; j < b.length() - 1 && !found; j++) {
                if (a[i] == b[j] && a[i + 1] == b[j + 1]) {
                    templateStr = "*" + a.substr(i, 2) + "*";
                    found = true;
                }
            }
        }

        if (found) {
            cout << "YES" << endl;
            cout << templateStr << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    
    return 0;
}