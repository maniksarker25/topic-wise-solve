// Cypher => https://codeforces.com/problemset/problem/1703/C
//s
#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int>nums(n);
        for(int i = 0;i<n;i++){
            cin >> nums[i];
        }
        for(int i = 0;i<n;i++){
            int b;
            cin >> b;
            while(b--){
                char c;
                cin >> c;
                if(c == 'D'){
                    if(nums[i] == 9){
                        nums[i] = 0;
                    }
                    else{
                        nums[i] += 1;
                    }
                }
                else{
                    if(nums[i] == 0){
                        nums[i] = 9;
                    }
                    else{
                        nums[i] -= 1;
                    }
                }
            }
        }

        for(int i = 0;i<n;i++){
            cout << nums[i] << ' ';
        }
        cout << endl;
        
    }
    return 0;
}