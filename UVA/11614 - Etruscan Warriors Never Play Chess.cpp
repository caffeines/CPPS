#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll binarySearch( ll l, ll r ) {
    ll ans = 0;
    while( l < r ) {
        ll mid = (l + r ) / 2;
        ll val = mid * ( mid + 1 ) / 2;

        if( n >= val ) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid;
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<binarySearch(0,1000000000)<<endl;
    }
    return 0;
}


