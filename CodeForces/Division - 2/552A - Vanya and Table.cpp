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
    int n, ans = 0 ;
    cin>>n;
    while( n-- ) {
        int x1, x2, y1, y2;
        cin>>x1>>y1>>x2>>y2;
        ans += (( x2 - x1 + 1 ) * ( y2 - y1 +1 ));
    }
    cout<<ans<<endl;

    return 0;
}


