#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    ll n;
    while ( cin>>n && n ) {

        if ( n == 1 ) {
            cout<<"1 0"<<endl;
            continue;
        }

        ll b, c, res = 1;
        for ( ll i = 2; i*i <= n; i++ ){
            if( n % i ) continue;

            b = n / i; c = n;

            while ( c % i == 0 ) {
                res++;
                c /= i;
            }
            if ( i == b ) continue;
            c = n;
            while ( c % b == 0 ) {
                res++;
                c /= b;
            }
        }
        cout<<n<<" "<<res<<endl;
    }
    return 0;
}


