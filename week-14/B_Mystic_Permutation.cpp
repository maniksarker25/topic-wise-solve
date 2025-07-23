// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> p(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> p[i];
//         }

//         if (n == 1) {
//             cout << -1 << '\n';
//             continue;
//         }

//         multiset<int> available;
//         for (int i = 1; i <= n; ++i) {
//             available.insert(i);
//         }

//         vector<int> q(n);

//         bool possible = true;
//         for (int i = 0; i < n; ++i) {
//             auto it = available.begin();

//             if (p[i] != *it) {
//                 q[i] = *it;
//                 available.erase(it);
//             } else {
//                 if (available.size() == 1) {
//                     if (i == 0) {
//                         possible = false;
//                         break;
//                     } else {
//                         q[i] = *it;
//                         available.erase(it);
//                         swap(q[i], q[i - 1]);
//                     }
//                 } else {
//                     ++it;
//                     q[i] = *it;
//                     available.erase(it);
//                 }
//             }
//         }

//         for (int i = 0; i < n && possible; ++i) {
//             if (p[i] == q[i]) {
//                 possible = false;
//             }
//         }

//         if (!possible) {
//             cout << -1 << '\n';
//         } else {
//             for (int i = 0; i < n; ++i) {
//                 cout << q[i] << " ";
//             }
//             cout << '\n';
//         }
//     }

//     return 0;
// }


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

        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            q[i] = i + 1;
        }

        if (n == 1) {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (p[i] == q[i]) {
                if (i + 1 < n) {
                    swap(q[i], q[i + 1]);
                } else {
                    swap(q[i], q[i - 1]);
                }
            }
        }

        bool valid = true;
        for (int i = 0; i < n; i++) {
            if (p[i] == q[i]) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; i++) {
                cout << q[i] << " ";
            }
            cout << '\n';
        }
    }


    return 0;
}
