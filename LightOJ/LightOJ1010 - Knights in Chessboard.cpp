/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define INF 0xfffffff
#define pl printf("\n")
#define pb(x) push_back(x)
#define sf(n) scanf("%d",&n)
#define slf(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define sff(n,m) scanf("%d %d",&n,&m)
#define slff(n,m) scanf("%lld %lld",&n,&m)

/*=========================================================
    stop doubting yourself, work hard and make it happen.
==========================================================*/

int solve(int x)
{
    int ans = x;
    if(x%4 == 1)
        ans += 1;
    else if(x%4 == 2)
        ans += 2;
    else if(x%4 == 3)
        ans += 1;
    return ans;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    sf(T);
    for(int t=1;t<=T;t++)
    {
        double res,n,m;
        scanf("%lf %lf",&m,&n);
        if(n==1)
            res = m;
        else if(m==1)
            res = n;
        else if(n==2)
            res = solve(m);
        else if(m==2)
            res = solve(n);

        else
        {
            res = ceil((n*m)/2);
        }
        pf("Case %d: %.0lf\n",t,res);
    }
    return 0;
}
