#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >>n;
    vector<pair<int,int>>v;
    for(int i = 0;i<n;i++){
        int a,b;
        cin >> a >>b;
        v.push_back({b,a});
    }

    sort(v.begin(),v.end());

    int last_end = 0;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(last_end <= v[i].second){
            last_end = v[i].first;
            count++;
        }
    }
    cout << count << endl;

    
    return 0;
}