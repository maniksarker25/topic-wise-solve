#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    getline(cin, s);
    set<char>letters;
    for(auto ch : s){
        if(ch >='a' && ch <='z'){
            letters.insert(ch);
        }
    }

    cout << letters.size() <<endl;
    
    return 0;
}