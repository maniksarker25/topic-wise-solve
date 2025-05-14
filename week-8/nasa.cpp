#include <bits/stdc++.h>
using namespace std;

const int maxN = (1ll << 15);
vector<int>palindromes;

bool isPalinfome(int val){
    string s = to_string(val);
    int len = s.size();
    for(int i = 0;i<len/2;i++){
        if(s[i] != s[len-i-1]){
            return false;
        }
    }

    return true;
}

void markPalindrome (){
    for(int i = 0;i<maxN;i++){
        if(isPalinfome(i)){
            palindromes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    markPalindrome();

    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),cnt(maxN+1);
        for(int i = 0;i<n;i++){
            cin >>a[i];
            cnt[a[i]]++;
        }

        long long ans = n;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<palindromes.size();j++){
                int current = (a[i] ^ palindromes[j]);
                ans += cnt[current];
            }
        }

        cout << ans /2 << '\n';


    }
    
    return 0;
}