#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
    set<char>ss;
    for(int i = 0;i<s.size();i++){
        ss.insert(s[i]);
    }

    if(ss.size() % 2 == 0){
        cout << "CHAT WITH HER!"<<endl;
    }
    else{
        cout << "IGNORE HIM!" <<endl;
    }
    
    return 0;
}