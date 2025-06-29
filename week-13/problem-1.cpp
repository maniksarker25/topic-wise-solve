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
        vector<int> a(n);
        set<int> unique_elements;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            unique_elements.insert(a[i]);
        }

        if (unique_elements.size() == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" <<endl;
        }
    }
    
    return 0;
}