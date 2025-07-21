#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long total_moves = 0;

        for (int i = 0; i < n; ++i) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;

            total_moves += abs(a - c) + abs(b - d);
        }

        if(total_moves > 2){
            cout << total_moves / 2 << endl;
        }
        else{
            cout << total_moves << endl;
        }
    }


    return 0;
}
