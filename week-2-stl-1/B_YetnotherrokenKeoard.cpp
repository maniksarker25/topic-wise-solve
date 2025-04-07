// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--){
//        string s;
//        cin >> s;
//         vector<char>new_string;
//        for(char c : s){
//         if(c == 'b'){
//          if(!new_string.empty()){
//             for(int i = new_string.size() -1;i>=0;i--){
//                 if(new_string[i] >= 'a' && new_string[i] <='z'){
//                     new_string.erase(new_string.begin() + i);
//                     break;
//                 }
//             }
//          }
//         }
//         else if(c == 'B'){
//           if(!new_string.empty()){
//             for (int i = new_string.size() - 1; i >= 0; i--) {
//                 if (new_string[i] >= 'A' && new_string[i] <= 'Z') {
//                     new_string.erase(new_string.begin() + i);
//                     break;
//                 }
//             }
//           }
//         }
//         else{
//             new_string.push_back(c);
//         }
//        }

//        for(auto ch : new_string){
//         cout << ch;
//        }
//        cout << endl;
//     }
//     return 0;
// }


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
        int Bcount = 0;
        int bCount = 0;

        string new_string;
        for(int i = s.size() - 1;i>=0;i--){
            if(s[i] == 'b'){
                bCount++;
            }
            else if(s[i] == 'B'){
                Bcount++;
            }
            else if(s[i] >= 'a' && s[i] <='z' && bCount != 0){
                bCount--;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z' && Bcount != 0){
                Bcount--;
            }
            else{
                new_string += s[i];
            }
        }
        reverse(new_string.begin(),new_string.end());
        cout << new_string << endl;
    }

    return 0;
}