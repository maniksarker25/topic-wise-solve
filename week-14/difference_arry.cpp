// greedy approch =======>

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n,q;
//     cin >> n >>q;
//     vector<int>a(n+1);
//     for(int i = 1;i<=n;i++){
//         cin >> a[i];
//     }

//     for(int i = 1;i<=q;i++){
//         int l,r,x;
//         cin >> l >> r >>x;
//         for(int j = l;j<=r;j++){
//             a[j] += x;
//         }
//     }
//     for(int i = 1;i<=n;i++){
//         cout << a[i] << ' ';
//     }
//     cout << endl;
    
//     return 0;
// }


// difference array used



#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,q;
    cin >> n >>q;
    vector<int>a(n+1);
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }

    vector<int>d(n+2),pre_arr(n+2);
    for(int i = 1;i<=q;i++){
        int l , r , x;
        cin >> l >> r >>x;
        d[l]+=x;
        d[r+1] -= x;
    }

    for(int i = 1;i<=n;i++){
        pre_arr[i] = pre_arr[i-1] + d[i];
    }

    for(int i = 1;i<=n;i++){
        cout << a[i] + pre_arr[i] << ' ';
    }
    cout << endl;
    
    return 0;
}