#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int s_length = s.length();
        int index = s_length-1;
        int ans = 0;
        for(int i = s_length-1;i>=0;i--){
            int num = s[i] - '0';
            if(num >=1){
                index = i;
                break;
            }
            else{
                ans++;
            }

        }

        for(int i = 0;i<index;i++){
            if(s[i]!= '0'){
                ans++;
            }
        }

        cout << ans <<endl;

    }

    return 0;
}