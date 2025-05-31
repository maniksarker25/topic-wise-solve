#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> towers;
    
    for (int i = 0; i < n; ++i) {
        int cube;
        cin >> cube;
        auto it = towers.upper_bound(cube);
        if (it != towers.end()) {
            towers.erase(it);
        }
        towers.insert(cube);
    }

    cout << towers.size() << endl;
    return 0;
}