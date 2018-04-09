#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define kase(i,b) for(int i=1;i<=b;i++)
ll BigMod(ll base,ll power,ll mod)
{
    if(power == 0) return 1;
    if(power%2)
    {
        ll temp = (BigMod(base,power-1,mod));
        return ((base%mod)*(temp%mod))%mod;
    }
    else
    {
        ll temp = BigMod(base,power/2,mod);
        return ((temp%mod)*(temp%mod))%mod;
    }
}
int main()
{
    ll base,mod,power;
    while(cin>>base>>power>>mod)
    {
        cout<<BigMod(base,power,mod)<<endl;
    }
    return 0;
}



