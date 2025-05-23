#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >>s;
    string need = "hello";

    char target = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == need[target]){
            target++;
        }
    }
    if(target >=5){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    
    return 0;
}