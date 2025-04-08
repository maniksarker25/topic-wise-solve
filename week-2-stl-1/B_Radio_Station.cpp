#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;
    
    map<string,string>servers;

    for(int i = 0;i<n;i++){
        string name,ip;
        cin >> name >> ip;
        servers[ip] = name;
    }

    for(int i = 0;i<m;i++){
        string name,ip;
        cin >> name >> ip;
        ip.pop_back();
        cout << name <<' ' << ip << ';' << ' ' << '#'<<servers[ip] <<endl;
    }
    
    return 0;
}