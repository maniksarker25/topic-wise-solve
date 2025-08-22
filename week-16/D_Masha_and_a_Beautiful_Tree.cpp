#include <bits/stdc++.h>
using namespace std;


int ans=0;
vector<int> a; 


void makeBeauti(int l1,int r1,int l2,int r2){
    int mxL=0;
    for(int i=l1;i<=r1;i++){
        mxL=max(mxL,a[i]);
    }

    int mnR=INT_MAX;
    for(int i=l2;i<=r2;i++){
        mnR=min(mnR,a[i]);
    }

    if(mxL>mnR){
        int R=l2;
        for(int i=l1;i<=r1;i++){
            swap(a[i],a[R]);
            R++;
        }
        ans++;
    }

    if(l1==r1)return;

    int mid1=(l1+r1)/2;
    int mid2=(l2+r2)/2;

    makeBeauti(l1,mid1,mid1+1,r1);  
    makeBeauti(l2,mid2,mid2+1,r2); 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        a.resize(n+1);
    
        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }
    
        ans=0;
    
        if(is_sorted(a.begin()+1,a.begin()+n+1)){
            cout<<0<<endl;
            continue;
        }
    
        int mid=(n+1)/2;
        makeBeauti(1,mid,mid+1,n);
    
        if(is_sorted(a.begin()+1,a.begin()+n+1)){
            cout<<ans<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    
    
    return 0;
}