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
bool team[300];
vector <int> curr,nxt;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,a,b,rnd=1;
    cin>>n>>a>>b;

    team[a] = true;
    team[b] = true;

    for(int i=1;i<=n;i++)
        curr.pb(i);
    while(true)
    {
        for(int i=0;i<curr.size();i+=2)
        {
            if(team[curr[i]] && team[curr[i+1]])
            {
                goto End;
            }
            else if(team[curr[i+1]])
                nxt.pb(curr[i+1]);
            else
                nxt.pb(curr[i]);
        }

        curr.clear();
        curr = nxt;
        nxt.clear();
        rnd++;
    }

    End:
    if(curr.size() == 2)
        cout<<"Final!"<<endl;
    else
        cout<<rnd<<endl;

    return 0;
}

