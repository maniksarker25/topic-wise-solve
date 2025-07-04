#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> freq(MAX, 0);

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int result = 1;

    for (int i = 2; i < MAX; ++i) {
        int count = 0;

        for (int j = i; j < MAX; j += i) {
            count += freq[j];
        }

        result = max(result, count);
    }

    cout << result << endl;

    return 0;
}
