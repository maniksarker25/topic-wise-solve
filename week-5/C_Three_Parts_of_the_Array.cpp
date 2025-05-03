#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    vector<long long>pre_sum(n);
    pre_sum[0] = a[0];
    for(int i = 1;i<n;i++){
        pre_sum[i] = pre_sum[i-1] + a[i];
    }

    long long maxSum = 0;
    int l = 0,r =n-1;
    while(l < r){
        if(pre_sum[l] > (pre_sum[n-1] - pre_sum[r-1])){
            r--;
        }
        else if((pre_sum[n-1] - pre_sum[r-1]) > pre_sum[l]){
            l++;
        }
        else{
            maxSum = pre_sum[l];
            l++;
            r--;
        }
    }
    cout << maxSum << endl;
    
    return 0;
}