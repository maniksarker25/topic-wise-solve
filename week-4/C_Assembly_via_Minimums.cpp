#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t ;
    while(t--){
        int n;
        cin >> n;
        vector<int>a;
        int m =(n * n-n) / 2;
        vector<int>b(m);
        for(int i = 0;i<m;i++){
            cin >> b[i];
        }
        sort(b.begin(),b.end());
        int idx = 0;
        for (int i = 1; i < n; i++) {
            a.push_back(b[idx]);
            idx += (n - i);
        }
        a.push_back(1e9);
        for(int i = 0;i<n;i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}