// Berpizza=> https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>mls;
    vector<int>ans;
    int custumer_num = 1;
    for(int i = 1;i<=n;i++){
        int type;
        cin >> type;
        if(type == 1){
            int money;
            cin >> money;
            s.insert({custumer_num,money});
            mls.insert({money,-custumer_num});
            custumer_num++;
        }
        else if(type == 2){
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            mls.erase({money,-pos});

        }
        else{
            int pos = -mls.rbegin()->second,money = mls.rbegin()->first;
            ans.push_back(pos);
            mls.erase(--mls.end());
            s.erase({pos,money});

        }
    }


    for(auto val : ans){
        cout << val << ' ';
    }


    return 0;
}