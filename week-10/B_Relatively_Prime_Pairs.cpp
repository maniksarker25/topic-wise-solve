#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long l, r;
    cin >> l >> r;

    cout << "YES" << endl;
    for (long long i = l; i <= r; i += 2) {
        cout << i << " " << i + 1 << endl;
    }

    return 0;
}
