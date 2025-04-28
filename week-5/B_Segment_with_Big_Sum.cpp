#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long s;
    cin >> n >> s;
    vector<int>a(n);
    for(int i=  0;i<n;i++){
        cin >> a[i];
    }

    int l = 0,r=0;
    long long current_sum = 0;
    long long answer = 0;

    while(r<n) {
       current_sum += a[r];
       while (current_sum >= s) {
        answer += (n - r);
        current_sum -= a[l];
        l++;
       }
       r++;
    }

    cout << answer <<endl;
    
    return 0;
}