// Chemistry=> https://codeforces.com/problemset/problem/1883/B


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int>mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        int oddCount = 0;
        for(auto it : mp){
            if(it.second % 2 != 0){
                oddCount++;
            }
        }

        if(oddCount - k <= 1 && n -k > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
