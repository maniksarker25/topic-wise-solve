#include <bits/stdc++.h>
using namespace std;
const int MAX = 200005;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> freq(MAX, 0);

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    for (int i = 1; i < MAX; i++) {
        freq[i] += freq[i - 1];
    }

    vector<int> isAdmissible(MAX, 0);
    for (int i = 1; i < MAX; i++) {
        if (freq[i] >= k) {
            isAdmissible[i] = 1;
        }
    }

    vector<int> prefix(MAX, 0);
    for (int i = 1; i < MAX; i++) {
        prefix[i] = prefix[i - 1] + isAdmissible[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << endl;
    }
    
    return 0;
}