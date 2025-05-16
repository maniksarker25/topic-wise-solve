#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int x;
    cin >> x;
    int stepNeed = 0;
    while(x >0){
        if(x >=5){
            x -= 5;
        }
        else if(x >= 4){
            x -= 4;
        }
        else if(x >= 3){
            x-=3;
        }
        else if(x>=2){
            x -= 2;
        }
        else {
            x -= 1;
        }
        stepNeed++;
    }
    cout << stepNeed << endl;
    
    return 0;
}