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
#define pl printf("\n")
#define pb(x) push_back(x)
#define sf(n) scanf("%d",&n)
#define slf(n) scanf("%lld",&n)
#define INF 0
#define dbg printf("caffeines\n")
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
    int n,s;
    while(cin>>n>>s)
    {
        int ans = INF,a[n];
        int sum = 0,end = 0;
        bool flag = true;
        for(int i=0;i<n;i++)
            sf(a[i]);

        for(int start=0;start<n;start++)
        {
            while(end<n && sum < s)
                sum += a[end++];
            if(sum >= s)
            {
                ans = min(ans, end - start);
            }
            sum -= a[start];
        }

        if(ans == INF)
            cout<<"0"<<endl;
        else
            cout<<ans<<endl;
    }

    return 0;
}
