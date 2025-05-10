#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >>s;
    int lower = 0,upper = 0;
    for(int i =0;i<s.size();i++){
        if(islower(s[i])){
            lower++;
        }
        else{
            upper++;
        }
    }

    if(lower < upper){
        for(int i = 0;i<s.size();i++){
            if(islower(s[i])){
                s[i] = s[i] -32;
            }
        }
        cout << s <<endl;
    }
    else{
        for(int i = 0;i<s.size();i++){
            if(isupper(s[i])){
                s[i] = s[i] +32;
            }
        }
        cout << s <<endl;
    }

    
    return 0;
}