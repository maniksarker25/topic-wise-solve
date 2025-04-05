// make it white => https://codeforces.com/problemset/problem/1927/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<char>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int left_index = -1;
        int right_index = -1;

        for(int i = 0;i<n;i++){
            if(a[i] == 'B' && left_index ==-1){
                left_index= i;
            }
            if(a[i] == 'B'){
                right_index = i;
            }
            
        }
        cout << (right_index - left_index ) + 1 << endl;
    }
    
    return 0;
}