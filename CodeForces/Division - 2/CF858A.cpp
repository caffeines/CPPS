#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define kase(i,b) for(int i=1;i<=b;i++)
ll LCM (ll a,ll b)
{
    ll g = __gcd(a,b);
    return ((a/g)*b);
}
int main()
{
    ll k,n;
    while(cin>>n>>k)
    {
        int res = 1;
        for(int i=1;i<=k;i++)
            res *=10;
        ll ans = LCM(res,n);
        cout<<ans<<endl;
    }
    return 0;
}