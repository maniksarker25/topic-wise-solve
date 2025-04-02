// Olympiad Date => https://codeforces.com/problemset/problem/2091/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        int threeCount = 0;
        int fiveCount = 0;
        int count = 0;
       for(int i = 0;i<n;i++){
        if(zeroCount < 3 || oneCount < 1 || twoCount < 2 || threeCount < 1 || fiveCount < 1){
            if(a[i] == 0){
                zeroCount++;
            }
            else if(a[i] == 1){
                oneCount++;
            }
            else if(a[i] == 2){
                twoCount++;
            }
            else if(a[i] == 3){
                threeCount++;
            }
            else if(a[i] == 5){
                fiveCount++;
            }
            count++;
        }
        else {
            break;
        }
       }
       if(zeroCount < 3 || oneCount < 1 || twoCount < 2 || threeCount < 1 || fiveCount < 1){
        cout << 0 << endl;
       }
       else {
        cout << count << endl;
       }

    }   
    return 0;
}