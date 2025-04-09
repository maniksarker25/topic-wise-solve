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
        vector<int>nums(n);
        for(int i = 0;i<n;i++){
           cin >>  nums[i];
        }

        int unique_cout_from_right = 0;
        set<int>uniques;
        for(int i = nums.size()-1;i>=0;i--){
            if(uniques.find(nums[i]) != uniques.end()){
                break;
            }
            else{
                unique_cout_from_right++;
                uniques.insert(nums[i]);
            }
        }

        cout << n - unique_cout_from_right << endl;
    }

    return 0;
}