// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, m, k;
//         cin >> n >> m >> k;

//         long long l = 1, r = m, ans = m;

//         auto ok = [&](long long mid) {
//             long long total = 0;
//             for (int i = 0; i < n; ++i) {
//                 int mm = m;
//                 if(mid + 1 >= mm){
//                     int val =  (mm / (mid +1));
//                     total +=( val * mid);
//                     mm -= ((mid +1) * val);
//                 }

//                 if(mm > 0){
//                     total += mm;
//                 }

//                 if (total >= k) break;
//             }
//             return total >= k;
//         };

//         while (l <= r) {
//             long long mid = (l + r) / 2;
//             if (ok(mid)) {
//                 ans = mid;
//                 r = mid - 1;
//             } else {
//                 l = mid + 1;
//             }
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;

        long long l = 1, r = m, ans = m;

        auto ok = [&](long long mid) {
            long long fullBenches = m / (mid + 1);
            long long desksInRow = fullBenches * mid;
            desksInRow += min(m % (mid + 1), mid);
            long long totalDesks = desksInRow * n;
            return totalDesks >= k;
        };

        while (l <= r) {
            long long mid = (l + r) / 2;
            if (ok(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
