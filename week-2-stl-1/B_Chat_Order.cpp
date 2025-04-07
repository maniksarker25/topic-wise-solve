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

    reverse(v.begin(),v.end());


    for(int i = 0;i<n;i++){
        cout << v[i] << endl;
    }

    cout << endl;

    unordered_set<string>friends;

    for(int i = 0;i<n;i++){
        friends.insert(v[i]);
    }

    for(auto frd : friends){
        cout << frd << endl;
    }
    
    return 0;
}