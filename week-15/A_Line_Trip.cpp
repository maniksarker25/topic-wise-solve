#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        
        int n,x;
        cin >> n >>x;

        vector<int>a(n);
        int mx = INT_MIN;
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        for(int i = 1;i<n;i++){
            int diff = a[i] - a[i-1];
            mx = max(mx,diff);
        }

        mx = max(mx,a[0]-0);
        mx = max(mx,2 * (x-a[n-1]));
        cout << mx << endl;

        


    }

    
    return 0;
}