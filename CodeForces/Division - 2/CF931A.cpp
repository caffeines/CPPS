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


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int x,y,res;
    while(cin>>x>>y)
    {
        if(y<x)
            swap(x,y);

        int xc=0,yc=0,idx=0;
        while((y-x)>1)
        {
            x++; y--;
            idx++;
            xc += idx;
            yc += idx;
        }

        if( x!=y )
            res = xc+yc+idx+1;
        else
            res = xc+yc;

        cout<<res<<endl;
    }

    return 0;
}

