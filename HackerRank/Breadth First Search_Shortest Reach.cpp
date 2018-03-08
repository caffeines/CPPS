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

#define N 100010
vector <int> graph[N];
bool visit[N];
int dist [N];

void bfs(int start)
{
    queue <int> q;
    visit[start] = true;
    dist[start] = 0;
    q.push(start); //insert in queue
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for(int i = 0;i<graph[u].size();i++) // check all adjacent node
        {
            int v = graph[u][i];
            if(visit[v])
                continue;
            visit[v] = true;
            dist[v] = dist[u]+6;
            q.push(v);
        }
    }
}

void Clear()
{
    for(int i=0;i<N;i++)
    {
        graph[i].clear();
        dist[i] = -1;
    }
    mem(visit);
}



int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q;
    sf(q);
    for(int i =0;i<q;i++)
    {
        Clear();
        int node,edge,source;
        sff(node,edge);
        for(int j = 0;j<edge;j++)
        {
            int u,v;
            sff(u,v);
            graph[u].pb(v);
            graph[v].pb(u);
        }
        sf(source);
        bfs(source);
        for(int j = 1;j<=node;j++)
        {
            if(j == source)
                continue;
            if(j == node)
                cout<<dist[j]<<endl;
            else
                cout<<dist[j]<<" ";
        }

    }
    return 0;
}
