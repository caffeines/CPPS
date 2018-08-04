#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll TrailingZeroes(ll n, ll b) {
    ll p = b, res = 0;
    while ( n >= p) {
        res += n / p;
        p *= b;
    }
    return res;
}

ll solve(ll n, ll r, ll p, ll q, ll b){

    ll nfact = TrailingZeroes( n, b );
    ll rfact = TrailingZeroes( r, b );
    ll r_nfact = TrailingZeroes( n-r, b );

    ll res = nfact - rfact - r_nfact;

    ll exp = 0;
    while( p % b == 0 ) {
        exp ++;
        p /= b;
    }
    res += exp * q;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines
    ll n,t,p,q,r;
    cin>>t;
    for( int kase = 1; kase <= t; kase++ ) {
        cin>>n>>r>>p>>q;
        cout<<"Case "<<kase<<": "<<min( solve( n,r, p, q, 2 ), solve( n, r, p, q, 5 ))<<endl;

    }

    return 0;
}

