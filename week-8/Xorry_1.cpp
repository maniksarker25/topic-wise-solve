#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int x;
        cin >>x;
        int most_set_bit = __lg(x);
        int b = (1 << most_set_bit);
        int a = x - b;
        cout << a << ' ' << b <<endl;
    }
    
    return 0;
}