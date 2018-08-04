#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pb_ds;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    pb_ds treap;

    ll n,t;
    cin>>t;
    while( t-- ) {
        treap.clear();
        cin>>n;
        ll a[n];
        for( int i = 0; i < n; i++ ) {
            cin>>a[i];
        }
        ll cnt = 0;
        for( int i = n-1; i >= 0; i-- ) {
            cnt += treap.order_of_key(a[i]);
            treap.insert(a[i]);
        }
        cout<<cnt<<endl;
    }
    return 0;
}


