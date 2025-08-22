#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while (t--)
    {
        
        int n;
        cin >>n;
        vector<int>a(n+1);
        for(int i = 1;i<=n;i++){
            cin >> a[i];
        }

        bool ok = false;
        for(int i = 1;i<=n;i++){
            if(a[1] != a[i]){
                ok = true;
                break;
            }
        }
        if(!ok){
            cout << "NO"<< endl;
            continue;
        }

        cout << "YES" << endl;
        int district = -1;
        for(int i = 2;i<=n;i++){
            if(a[1] != a[i]){
                cout << 1 << " " << i << endl;
                district = i;
            }
        }

        for(int i = 2;i<=n;i++){
            if(a[i] == a[1]){
                cout << district << " " << i << endl;
            }
        }




    }
    
    return 0;
}