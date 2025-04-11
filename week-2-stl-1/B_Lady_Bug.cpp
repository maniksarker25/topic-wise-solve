// lady bug =-> https://codeforces.com/contest/2092/problem/B

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
        string s1,s2;
        cin >> s1 >> s2;
        int oddPosOneInA = 0;
        int evenPosOneInA = 0;
        int oddFreeCellInB = 0;
        int evenFreeCellInB = 0;

        for(int i = 0;i<n;i++){
            if(s1[i] == '1'){
                if(i % 2 == 0){
                    evenPosOneInA++;
                }
                else{
                    oddPosOneInA++;
                }
            }
            if(s2[i] == '0'){
                if(i % 2 == 0){
                    evenFreeCellInB++;

                }
                else{
                    oddFreeCellInB++;
                }
            }
        }

        if(oddFreeCellInB >= evenPosOneInA && evenFreeCellInB >= oddPosOneInA){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    

    }
    
    return 0;
}