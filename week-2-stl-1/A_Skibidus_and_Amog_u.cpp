#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        string w;
        cin >>w;
        if(w.length() == 2){
            cout << "i"<<endl;
        }
       else{
        w.pop_back();
        w.pop_back();
        w+= 'i';
        cout << w << endl;
       }


    }
    
    return 0;
}