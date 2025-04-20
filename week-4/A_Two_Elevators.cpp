#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >>c;
        int firstTimeTake = 0,secondTimeTake =0;
        firstTimeTake = a -1;
        if(b >c){
            secondTimeTake = b - 1;
        }
        else{
            secondTimeTake = (c-b) + (c-1);
        }

        if(firstTimeTake == secondTimeTake){
            cout << 3 << endl;
        }
        else if(firstTimeTake > secondTimeTake){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }

    return 0;
}