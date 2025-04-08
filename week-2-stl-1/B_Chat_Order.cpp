#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<string>v(n);

    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    set<string>printed;
    for(int i = v.size() -1;i>=0;i--){
     if(printed.find(v[i]) == printed.end()){
        cout << v[i] << endl;
        printed.insert(v[i]);
     }
    }
    
    return 0;
}