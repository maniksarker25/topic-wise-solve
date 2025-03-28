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

    long long sum = 0;
    for(int i = 0;i<n;i++){
        sum += a[i];
    }

    int minOdd = INT_MAX;
    for(int i = 0;i<n;i++){
        if(a[i] % 2 != 0){
            minOdd = min(minOdd,a[i]);
        }
    }
    if(sum %2 == 0){
        cout << sum << endl;
    }
    else{
        cout << sum - minOdd << endl;
    }
    return 0;
}