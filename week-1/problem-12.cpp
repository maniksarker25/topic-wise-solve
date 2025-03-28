// gaming force => https://codeforces.com/problemset/problem/1792/A


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
 
//     int t;
//     cin >>t;
//     while(t--){
//         int n;
//         cin >>n;
//         vector<int>a(n);
//         for(int i = 0;i<n;i++){
//             cin >> a[i];
//         }
//         int numberOfSpell = 0;
//         bool allZero = false;
//         int take = 0;
//         while(!allZero){
//             allZero = true;
//             for(int i = 0;i<n;i++){
//                 if(a[i] == 1){
//                     a[i] = a[i] -1;
//                     take++;
//                     if(a[i] >0 ){
//                         allZero = false;
//                     }
//                     if(take == 2){
//                         numberOfSpell++;
//                         take = 0;
//                     }
//                 }
//                 if(a[i] > 1){
//                     if(take == 1){
//                         a[i] = a[i] -1;
//                         take++;
//                         if(take == 2){
//                             numberOfSpell++;
//                             take = 0;
//                         }
//                         if(a[i] >0 ){
//                             allZero = false;
//                         }
//                     }
//                     else{
//                         a[i] = 0;
//                         numberOfSpell++;
//                     }
//                 }
//             }
      
//         }
//         if(take == 1){
//             numberOfSpell++;
//         }
//         cout << numberOfSpell << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int>health(n);
        int oneCount = 0;
        for(int i = 0;i<n;i++){
            cin >> health[i];
            if(health[i] == 1){
                oneCount++;
            }
        }
        int spellNeed;
        if(oneCount %2 == 0){
            spellNeed = n - oneCount + oneCount / 2;
        }else{
            spellNeed = n -(oneCount -1) + oneCount / 2;
        }

        cout << spellNeed << endl;
}
    return 0;
}