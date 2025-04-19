// Number of Equal => https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }

    int l =0,r = 0;
    long long ans = 0;
    while(l < n && r <m){
        int curr_element = a[l],count_one = 0,count_two = 0;
        while( l < n && a[l] == curr_element){
            count_one++;
            l++;
        }

        while(r < m && curr_element > b[r]){
            r++;
        }

        while(r < m && b[r]==curr_element){
            count_two++;
            r++;
        }

        ans += (1LL * count_one * count_two);
    }

    cout << ans << endl;


    return 0;
}