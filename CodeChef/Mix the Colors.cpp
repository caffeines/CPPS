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

map <ll,int> mp;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,T;
    cin>>T;
    while(T--)
    {
        int sum = 0;
        mp.clear();
        cin>>n;
        while(n--)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        map<ll,int>::iterator it;
        for(it = mp.begin();it!=mp.end();it++)
        {
            sum += (it->second-1);
        }
        cout<<sum<<endl;
    }

    return 0;
}

