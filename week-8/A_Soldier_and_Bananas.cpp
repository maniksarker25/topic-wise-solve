#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, n, w;
    cin >> k >> n >> w;

    long long totalCost = 0;
    for (long long i = 1; i <= w; i++) {
        totalCost += (i * k);
    }

    if(totalCost -n > 0){
        long long ans =  totalCost -n;
        cout << ans << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}
