#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin >>x >>y;
        int sceenNeed = 0;
        //
        while(x > 0 || y > 0){
            int twoSizeIconUse = min(2,y);
            int spaceLeft = 15 - twoSizeIconUse * 4;
            int oneSizeIconUse = min(spaceLeft,x);
            x -= oneSizeIconUse;
            y -= twoSizeIconUse;
            sceenNeed++;
        }

        cout << sceenNeed <<endl;
    }
    
    return 0;
}