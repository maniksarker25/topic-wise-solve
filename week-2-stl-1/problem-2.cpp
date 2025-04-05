// Sereja and Dima => https://codeforces.com/problemset/problem/381/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }    
    int left = 0;
    int right = n-1;
    int sereja = 0;
    int dima = 0;
    int count = 0;
    while(left<=right){
        if(a[left] > a[right]){
            if(count % 2 == 0){
                sereja += a[left];
    
            }
            else{
                dima += a[left];
            }
            left++;
        }
        else{
            if(count %2 ==0){
                sereja+= a[right];
            }
            else{
                dima += a[right];
            }
            right--;
        }
        count++;
    }

    cout << sereja << ' ' << dima << endl;

    return 0;
}