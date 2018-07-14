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
    for(int kase=01; kase <= t; kase++){
        ll n,m;
        cin>>n>>m;
        ll ans = (n * m) / 2;
        cout<<"Case "<<kase<<": "<<ans<<endl;
    }

    return 0;
}


