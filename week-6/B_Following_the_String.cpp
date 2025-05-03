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
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        string result;
        map<char,int>freq;
        vector<char>used_ch;
        char currentChar = 'a';

        for(int i = 0;i<n;i++){
            if(a[i] == 0){
                result += currentChar;
                freq[currentChar]++;
                used_ch.push_back(currentChar);
                currentChar++;
            }
            else{
                for(char ch : used_ch){
                    if(freq[ch] == a[i]){
                        result += ch;
                        freq[ch]++;
                        break;
                    }
                }
            }
        }
        cout << result << endl;

    }
    
    return 0;
}