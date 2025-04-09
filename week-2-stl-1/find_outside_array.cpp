#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int>a(n);
	    unordered_set<int>nums;
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        nums.insert(a[i]);
	    }

        if(a.size() == 1){
            cout << a[0] << ' '<< a[0] << endl;
        }
        else{
            bool found = false;
	    
            for(int i = 0;i<n;i++){
                for(int j = i;j<n;j++){
                    if(i != j){
                        int x = a[i] + a[j];
                    if(nums.find(x) == nums.end()){
                        cout << a[i] << ' ' << a[j] << endl;
                        found = true;
                        break;
                    }
                    }
                }
                if(found){
                    break;
                }
            }
            
            if(!found){
                cout << -1 << endl;
            }
        }
	    
	   
	}

}
