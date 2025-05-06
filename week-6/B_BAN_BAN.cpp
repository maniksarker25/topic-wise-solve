#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int k = (n + 1) / 2;
        cout << k <<endl;
        int i = 2 , j = 3 * n;
        while(i <j){
            cout << i << ' ' << j << endl;
            i = i+3;
            j = j -3;
        }
    }
    
    return 0;
}