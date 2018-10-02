#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    cin>>t;
    while( t-- ) {
        int n;
        cin>>n;
        int a[n];
        for( int i = 0; i < n; i++ ) {
            cin>>a[i];
        }

        int cnt = 0;
        for( int i = 0, m; i < n-1; i++ ) {
            m = min(a[i], a[i+1]);
            a[i] -= m;
            a[i+1] -= m;
        }
        for( int i = 0; i < n; i++ ) {
            if( a[i] == 0) cnt++;
        }
        cout<<(cnt==n? "YES":"NO")<<endl;
    }
    return 0;
}


