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

#define N 20005
vector <int> graph[N];
int visit[N];
int Vampires,Lykans,mx=0;

void bfs(int start)
{
    queue <int> q;
    visit[start] = 1;
    Lykans++;
    q.push(start); //insert in queue
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for(int i = 0;i<graph[u].size();i++) // check all adjacent node
        {
            int v = graph[u][i];
            if(visit[v]==0)
            {
                if(visit[u]==1)
                {
                    visit[v] = -1;
                    Vampires++;
                }
                else
                {
                    visit[v] = 1;
                    Lykans++;
                }
                q.push(v);
            }
        }
    }
    mx += max(Vampires,Lykans);
}

void Clear()
{
    for(int i=0;i<N;i++)
        graph[i].clear();

    Vampires=Lykans=mx=0;
    mem(visit);
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,x,y,T;
    sf(T);
    for(int t=1;t<=T;t++)
    {
        sf(n);
        Clear();

        for(int i=1;i<=n;i++)
        {
            sff(x,y);
            graph[x].pb(y);
            graph[y].pb(x);
        }

        for(int i=0;i<N;i++)
        {
            if(graph[i].size()!=0 && visit[i]==0)
            {
                Vampires=Lykans=0;
                bfs(i);
            }
        }

        printf("Case %d: %d\n",t,mx);
    }

    return 0;
}
