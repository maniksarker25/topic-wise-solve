#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n,m,k;
    cin >> n >> m >>k;
    vector<long long>a(n),b(m);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    int count = 0;
    int i = 0,j=0;
    while(i <n && j <m){
        if(abs(a[i]-b[j]) <= k){
            count++;
            i++;
            j++;
        }
        else if(b[j] < (a[i] -k)){
            j++;
        }
        else if(b[j] > (a[i] + k)){
            i++;
        }
    }

    cout << count << endl;
    
    return 0;
}