#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >>s;
    map<char,int>freq;
    for(auto c :s){
        freq[c]++;
    }

    int oddCount = 0;
    char oddChar;
    for(auto it : freq){
        if(it.second %2!=0){
            oddCount++;
            oddChar = it.first;
        }
    }

    if(oddCount > 1){
        cout <<"NO SOLUTION"<<endl;
        return 0;
    }

    string firstHalf = "";
    for (auto it : freq) {
        firstHalf += string(it.second / 2, it.first);
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(),secondHalf.end());

    cout << firstHalf;
    if(oddCount >0){
        cout << oddChar;
    }
    cout << secondHalf<<endl;


    return 0;
}