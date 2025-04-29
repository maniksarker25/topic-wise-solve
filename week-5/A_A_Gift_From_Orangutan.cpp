#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end(),greater<int>());
        sort(a.begin()+1,a.end());

        vector<int>b(n);
        vector<int>c(n);
        int mn = a[0],mx = a[0];
        for(int i = 0;i<n;i++){
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);
            b[i] = mn;
            c[i] = mx;
            
        }
        int score = 0;
        for(int i = 0;i<n;i++){
            score += abs(b[i] - c[i]);
        }

        cout << score << endl;

    }

    return 0;
}