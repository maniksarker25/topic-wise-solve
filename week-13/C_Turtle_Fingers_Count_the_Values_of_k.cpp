#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        long long a, b, l;
        cin >> a >> b >> l;

        set<long long> st;

        for (long long ax = 1; ax <= l; ax *= a) {
            for (long long by = 1; ax * by <= l; by *= b) {
                if (l % (ax * by) == 0) {
                    long long k = l / (ax * by);
                    st.insert(k);
                }
            }
        }

        cout << st.size() << "\n";
    }
    
    return 0;
}