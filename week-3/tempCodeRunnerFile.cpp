int mn = INT_MAX,mx = INT_MIN;
        for(int i = l;i<=r;i++){
        mn = min(mn,v[i]);
        mx = max(mx,v[i]);
        }
        if(v[l] == mn || v[l] == mx){
            l++;
        }
        else if(v[r] == mn  || v[r] == mx){
            r--;
        }
        else{
            cout << l << ' ' << r << endl;
            flag = true;
            break;
        }