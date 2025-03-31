// to zero => https://codeforces.com/problemset/problem/2075/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int count = 0;
        if(n % 2 != 0){
            n -= k;
            count++;
        }
        if(n == 0){
            cout << count << endl;
        }
        else if(n <= k){
            cout << count + 1 << endl;
        }
        else{
            int ans = n / (k-1);
            n -= ans * (k-1);
            count += ans;
            if(n == 0){
                cout << count << endl;
            }
            else{
                cout << count + 1 << endl;
            }
            
        }
    }
    return 0;
}