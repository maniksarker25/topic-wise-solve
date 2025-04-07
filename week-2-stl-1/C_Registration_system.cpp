// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    

//     int n;
//     cin >> n;
//     vector<string>v;
//     while(n--){
//         string s;
//         cin >>s;
//         if(find(v.begin(),v.end(),s) == v.end()){
//             v.push_back(s);
//             cout << "OK" << endl;
//         }
//         else{
//             int num = 1;
//             s = s+= '1';
//             while(find(v.begin(),v.end(),s) != v.end()){
//                 num += 1;
//                 char new_ch = num + '0';
//                 s.pop_back();
//                 s = s += new_ch;
//             }
//             v.push_back(s);
//             cout << s << endl;
//         }
//     }

//     return 0;
// }



// optimized code 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string,int>user_names;
    while(n--){
        string name;
        cin >> name;
        if(user_names.find(name) == user_names.end()){
            user_names[name] = 1;
            cout << "OK" << endl;
        }
        else{
            int count = user_names[name];
            string new_name = name += (count + '0');
            while(user_names.find(new_name) != user_names.end()){
                count++;
                new_name  = name + (count + '0');
            }
            user_names[name] = count +1;
            user_names[new_name] = 1;
            cout << new_name << endl;
        }
    }
    
    return 0;
}


