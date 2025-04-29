#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char vowels[5] = {'a','e','i','o','u'};
        string s;
        for(int i = 0;i<n;i++){
           int reminder = i % 5;
           s += vowels[reminder];
        }
        sort(s.begin(),s.end());
        cout << s <<endl;
    }
    
    return 0;
}