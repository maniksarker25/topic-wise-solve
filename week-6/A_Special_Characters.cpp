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
        cin >>n;
        if(n % 2 == 0){
            cout << "YES"<<endl;
            string result;
            for(int i = 1;i<= n/2;i++){
                if(i % 2 == 0){
                    result += "AA";
                }
                else{
                    result += "BB";
                }
            }
            cout << result << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}