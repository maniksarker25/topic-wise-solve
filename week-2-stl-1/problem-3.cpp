// Indian Summer=>https://codeforces.com/problemset/status?my=on
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    set<pair<string,string>>s;

    for(int i = 0;i<n;i++){
        string a,b;
        cin >> a >> b;
        if(s.find({a,b})== s.end()){
            s.insert({a,b});
        }
    }

    cout << s.size() << endl;
    
    return 0;
}