#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int power(int a, int b) {
    int ans = 1;
    while (b) {
        if (b & 1) {
            ans = 1LL * ans * a % MOD;
        }
        a = 1LL * a * a % MOD;
        b >>= 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n;
   cin>>n;
   while(n--){
    int a, b;
    cin >> a >> b;
    cout << power(a,b) << endl;
   }

    return 0;
}
