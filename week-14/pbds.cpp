// pbds 



#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

                                // if need multiset just make less => less_equal
template <typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,
tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >>n;
    pbds<int>p;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        p.insert(x);
    }

    int x = p.order_of_key(4); // strictly less then that value count
    cout << x << endl;

    auto it = p.find_by_order(3);  // get itarator for that value
    cout << *it << endl;
    for(auto val : p){
        cout << val << ' ';
    }

    
    return 0;
}