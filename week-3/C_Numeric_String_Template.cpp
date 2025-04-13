// Numeric String Template => https://codeforces.com/problemset/problem/2000/C

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
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        int m;
        cin >> m;
        for(int i = 1;i<=m;i++){
            string s;
            cin >> s;
            bool isTemplate = true;
            map<char,int>char_mp;
            map<int,char>num_mp;
            if(s.length() != a.size()){
                isTemplate = false;
            }
            else{
                for(int j = 0;j<s.length();j++){
                    int num = a[j];
                    char ch = s[j];
                    if(char_mp.find(ch) != char_mp.end()){
                        if(char_mp[ch] != num){
                            isTemplate = false;
                        }
                    }
                    else{
                        char_mp[ch] = num;
                    }
                    if(num_mp.find(num) != num_mp.end()){
                        if(num_mp[num] != ch){
                            isTemplate = false;
                        }
                    }
                    else{
                        num_mp[num] = ch;
                    }
                }
            }

            if(isTemplate){
                cout << "YES" <<endl;
            }
            else{
                cout << "NO"<<endl;
            }
        }
    }
    
    return 0;
}