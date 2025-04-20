#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeroCount = 0;
        int oneCount = 0;
        if(s[0] == '0'){
            zeroCount++;
        }
        else{
            oneCount++;
        }

        for(int i =1 ;i<n;i++){
            if(s[i] != s[i-1]){
                if(s[i] == '0'){
                    zeroCount++;
                }
                else{
                    oneCount++;
                }
            }
        }
        
        int ans = min(zeroCount,oneCount);
        cout << ans <<endl;
    }
}
