#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define sq(a) (a)*(a)
#define pl printf("\n");
#define pf(n) printf("%d",n)
#define sf(n) scanf("%d",&n)
#define sff(a,b) scanf("%d %d",&a,&b);
#define sfff(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define INF (numeric_limits<int>::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define KASE(a) printf("Case %d: ",a);
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020
int big_mod(ll base, ll power, ll mod)
{
    if(power==0) return 1;
    if(power%2==0)
    {
        ll res = big_mod(base,power/2,mod);
        return ((res%mod)*(res%mod)%mod);
    }
    else
    {
        ll res = big_mod(base,power-1,mod);
        return ((res%mod)*(base%mod))%mod;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    sf(T);
    kase(t,T)
    {
        ll n,k;
        cin>>n>>k;
        double res = k*log10(n);
        double x = floor(res);
        double y = res - x;
        double fin = pow(10.0,y)*100;
        printf("%.0lf...",floor(fin));
        printf("%03d\n",big_mod(n,k,1000));
    }
    return 0;
}
