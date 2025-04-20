#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<char>letters(n);
        for(int i = 0;i<n;i++){
            cin >>  letters[i];
        }
        int count = 0;
        for(int i = 0;i<n;){
            if(letters[i] == 'B'){
                count++;
                i += k;
            }
            else{
                i++;
            }
        }

        cout << count << endl;
    }

    return 0;
}