#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        string pat,txt;
        cin >> pat >> txt;
        int n = pat.length();
        int m = txt.length();
        map<char,int>mp;
        for(int i = 0;i<n;i++){
            mp[pat[i]]++;
        }
        
        int count = 0;
        int l = 0,r= 0;
        map<char,int>window;
        while(r < m){
            window[txt[r]]++;
            if(r -l + 1 == n){
               if(window == mp){
                   count++;
               }
               window[txt[l]]--;
               if(window[txt[l]] == 0){
                   window.erase(txt[l]);
               }
               l++;
            }
            r++;
        }
        cout << count << endl;
    return 0;
}