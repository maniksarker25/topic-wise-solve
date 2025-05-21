#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,m;
    cin >> n >>m;
    multiset<int>ms;
    vector<int>customers(m);
    for(int i = 0;i<n;i++){
        int x;
        cin >>x;
        ms.insert(x);
    }

    for(int i = 0;i<m;i++){
        cin >> customers[i];
    }

    for(int i = 0;i<m;i++){
        auto it = ms.upper_bound(customers[i]);
        if(it == ms.begin()){
            cout << -1 << endl;
        }
        else{
            --it;
            cout << *it << endl;
            ms.erase(it);
        }
    }


    
    return 0;
}