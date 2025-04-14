// B. Box Fitting =>  https://codeforces.com/problemset/problem/1498/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,w;
        cin >> n >> w;
        multiset<int>mls;
        for(int i = 0;i<n;i++){
            int x;
            cin >> x;
            mls.insert(x);
        }
        int height = 1 , width_left = w;
        while(!mls.empty()){
            auto it = mls.upper_bound(width_left);
            if(it == mls.begin()){
                width_left = w;
                height++;
            }
            else{
                it--;
                int val = *it;
                width_left -= val;
                mls.erase(it);
            }
        }
        cout << height << endl;
    }
    
    return 0;
}