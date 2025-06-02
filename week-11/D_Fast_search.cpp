#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int k;
    cin >> k;
    while(k--) {
        int ll, rr;
        cin >> ll >> rr;

        int l = 0, r = n - 1;
        int ans1 = n;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(a[mid] >= ll) {
                ans1 = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        l = 0, r = n - 1;
        int ans2 = -1; 
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(a[mid] <= rr) {
                ans2 = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        int result = (ans2 >= ans1) ? (ans2 - ans1 + 1) : 0;
        cout << result << " ";
    }

    return 0;
}




// with lower bound and upper bound

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int k;
    cin >> k;
    while(k--) {
        int ll, rr;
        cin >> ll >> rr;

        // lower_bound returns first index where element >= ll
        int left = lower_bound(a.begin(), a.end(), ll) - a.begin();

        // upper_bound returns first index where element > rr
        int right = upper_bound(a.begin(), a.end(), rr) - a.begin();

        cout << right - left << " ";
    }

    return 0;
}
