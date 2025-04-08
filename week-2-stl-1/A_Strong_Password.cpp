#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;

    while(t--){
        string password;
        cin >> password;
        string new_password;
        bool new_letter_added = false;
        for(int i = 0;i<password.size();i++){
            if(i > 0 && password[i -1] == password[i] && !new_letter_added){
                char new_character = password[i] == 'z' ?password[i] -1 : password[i] + 1;
                new_password += new_character;
                new_password += password[i];
                new_letter_added = true;
            }
            else{
                new_password += password[i];
            }

        }
        if(!new_letter_added){
            new_password += (new_password[new_password.size() -1] == 'z' ?new_password[new_password.size() -1] -1 : new_password[new_password.size() -1] + 1);
        }
        cout << new_password << endl;
    }

    return 0;
}