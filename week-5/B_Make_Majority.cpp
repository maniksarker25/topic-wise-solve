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
        string s;
        cin >>s;
        char prev = '1';
        vector<int>v;
        for(char c : s){
            if(c=='1'){
                v.push_back(1);
            }
            if(c=='0' && prev == '1'){
                v.push_back(0);
            }
            prev = c;
        }

        int oneCount = 0,zeroCount = 0;
        for(int i = 0;i<v.size();i++){
            if(v[i]==1){
                oneCount++;
            }
            else{
                zeroCount++;
            }
        }
        if(oneCount > zeroCount){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}



