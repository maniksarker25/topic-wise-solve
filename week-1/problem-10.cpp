// A. Wet Shark and Odd and Even => https://codeforces.com/problemset/problem/621/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());

    long long sum = 0;
    for(int i = 0;i<n;i++){
        if(i == n-1){
            if((sum + a[i]) % 2 == 0){
                sum += a[i];
            }
            else {
                break;
            }
        }
       else {
        sum += a[i];
       }

    }

    cout << sum << endl;
 
    return 0;
}