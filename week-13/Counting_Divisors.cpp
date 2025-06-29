// #include <bits/stdc++.h>
// using namespace std;

// const int maxN = 30 + 9;
// vector<int> divisors[maxN];

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     for(int i = 1;i<maxN;i++){
//         for(int j = i;j <maxN;j += i){
//             divisors[j].push_back(i);
//         }
//     }

//     for(int i = 1;i<=30;i++){
//         cout << i << " => ";
//         for(auto value : divisors[i]){
//             cout << value << ' ';
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

// opor a sobgula divisor bar kora hoisa , sob gula number ar jonna
#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6 + 9;
vector<int> divisors(maxN);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    for(int i = 1;i<maxN;i++){
        for(int j = i;j <maxN;j += i){
            divisors[j]++;
        }
    }

    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        cout << divisors[n] << endl;
    }
    
    return 0;
}