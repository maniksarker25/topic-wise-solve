#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string>v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        long long int total_pair = 0;
        for(int i = 0;i<n-1;i++){
            for(int j = i +1;j<n;j++){
                if(v[i][0] == v[j][0] && v[i][1] != v[j][1] ){
                    total_pair++;
                }
                else if(v[i][0] != v[j][0] && v[i][1] == v[j][1]){
                    total_pair++;
                }
            }
        }

        cout << total_pair << endl;
    }


    return 0;
}