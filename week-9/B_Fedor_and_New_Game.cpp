#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,m,k;
    cin >> n >> m >>k;
    vector<int>a(m+1);
    for(int i = 0;i<=m;i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0;i<m;i++){
        int difference = a[i] ^ a[m];
        int totalSoldiersTypes = __builtin_popcount(difference);
        if(totalSoldiersTypes <= k){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}