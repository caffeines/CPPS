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

vector<ll> g,f;
bool test()
{
    bool flag = true;
    for(int i=0;i<g.size();i++)
    {
        if(g[i]>=f[i])
            continue;
        else
            flag = false;
    }
    return flag;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    sf(T);
    for(int t=1;t<=T;t++)
    {
        int res = 0;
        f.clear(); g.clear();
        int n;
        sf(n);
        ll glen,flen;
        for(int i=0;i<n;i++)
        {
            int input;
            sf(input);
            f.pb(input);
        }

        for(int i=0;i<n;i++)
        {
            int input;
            sf(input);
            g.pb(input);
        }

        if(test())
            res += 1;
        reverse(g.begin(),g.end());
        if(test())
            res += 2;

        if(res == 1)
            printf("front\n");
        else if(res == 2)
            printf("back\n");
        else if(res == 0)
            printf("none\n");
        else if(res==3)
            printf("both\n");

    }

    return 0;
}

