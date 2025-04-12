//  Train and Queries=> https://codeforces.com/problemset/problem/1702/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        map<int,set<int>>mp;
        for(int i = 0;i<n;i++){
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for(int i = 1;i<=k;i++){
            int l,r;
            cin >> l >> r;
            if(mp.find(l) == mp.end() || mp.find(r) == mp.end()){
                cout << "NO"<<endl;
            }
            else{
                int starting_s_l_m_index = *mp[l].begin();
                int ending_s_r_m_index = *mp[r].rbegin();
                if(starting_s_l_m_index < ending_s_r_m_index){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO"<<endl;
                }
            }
        }

    }

    return 0;
}