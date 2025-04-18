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
        vector<string>v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        long long int total_pair = 0;
        for(int i = 0;i<n-1;i++){
            for(int j = i +1;j<n;j++){
                if(v[i][0] == v[j][0] && v[i][1] != v[j][1] ){
                    total_pair++;
                }
                else if(v[i][0] != v[j][0] && v[i][1] == v[j][1]){
                    total_pair++;
                }
            }
        }

        cout << total_pair << '\n';
    }


    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<string> v(n);

//         map<char, int>first_char_frq;
//         map<char, int>second_char_frq;
//         map<string, int> str_frq;

//         for (int i = 0; i < n; ++i) {
//             cin >> v[i];
//             first_char_frq[v[i][0]]++;
//             second_char_frq[v[i][1]]++;
//             str_frq[v[i]]++;
//         }

//         long long total_pair = 0;
//         for (int i = 0; i < n; ++i) {
//             string s = v[i];
//             total_pair += first_char_frq[s[0]] - str_frq[s];
//             total_pair += second_char_frq[s[1]] - str_frq[s];
//         }

//         cout << total_pair / 2 << endl;
//     }

//     return 0;
// }
