
    set<string>friends;

    for(int i = 0;i<n;i++){
        friends.insert(v[i]);
    }

    for(auto frd : friends){
        cout << frd << endl;
    }