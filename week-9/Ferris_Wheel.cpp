#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n,x;
    cin >> n >>x;
    vector<long long>a(n);
    for(long long i = 0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    long long l = 0,r= n-1;
    int count = 0;
    while(l <=r){
        if(a[l]+a[r] <=x){
            l++;
            r--;
            count++;
        }
        else{
            count++;
            r--;
        }
    }
    cout << count << endl;
    return 0;
}