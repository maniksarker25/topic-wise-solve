// Powering the Hero (hard version) => https://codeforces.com/problemset/problem/1800/C2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        priority_queue<int>pq;
        int total = 0;
        for(int i = 0;i<n;i++){
            int x;
            cin >> x;
            if(x != 0){
                pq.push(x);
            }
            else {
                if(!pq.empty()){
                    total += pq.top();
                    pq.pop();
                }
            }   
        }
        cout << total << endl;
    }
    return 0;
}