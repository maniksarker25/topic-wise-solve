#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> powers(n);
    for (int i = 0; i < n; i++) {
        cin >> powers[i];
    }

    vector<int> sorted = powers;
    sort(sorted.begin(), sorted.end());

    map<int, int> compressed;
    for (int i = 0; i < n; i++) {
        compressed[sorted[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        powers[i] = compressed[powers[i]];
    }

    vector<int> rightSmaller(n);
    pbds<int> rightSet;

    for (int j = n - 1; j >= 0; j--) {
        rightSmaller[j] = rightSet.order_of_key(powers[j]);
        rightSet.insert(powers[j]);
    }

    pbds<int> leftSet;
    long long totalTriplets = 0;

    for (int j = 0; j < n; j++) {
        int leftGreater = leftSet.size() - leftSet.order_of_key(powers[j] + 1);
        totalTriplets += 1LL * leftGreater * rightSmaller[j];
        leftSet.insert(powers[j]);
    }

    cout << totalTriplets << endl;
    return 0;
}
