#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,x;
        cin >>n>>x;
        string s;
        cin>>s;
        bool posible = true;
        if(s[0] == '0'){
            posible = false;
        }
        else{
            long long card = x;
            for(int i = 1;i<n;i++){
                if(card == 0 && s[i] == '0'){
                    posible = false;
                    break;
                }
                else if(s[i] == '0'){
                    card--;
                }
                else{
                  card = x;  
                }
            }
        }
        if(posible){
            cout << "YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }

    }
    
    return 0;
}