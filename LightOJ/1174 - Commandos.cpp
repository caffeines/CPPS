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

#define Size 1010
vector <int> graph[Size];
vector <int> graph1[Size];
bool visited[Size];
bool visited2[Size];

int dist[Size];
int dist1[Size];

void Clear()
{
    for(int i=0;i<Size;i++)
    {
        graph[i].clear();
    }
    mem(dist);mem(dist1);
    mem(visited);mem(visited2);
}
void bfs(int src)
{
    queue <int> q;
    visited[src] = true;
    dist[src] = 0;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v] = true;
                q.push(v);
                dist[v] = dist[u]+1;
            }
        }
    }
}

void bfss(int src)
{
    queue <int> q;
    visited2[src] = true;
    dist1[src] = 0;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(!visited2[v])
            {
                visited2[v] = true;
                q.push(v);
                dist1[v] = dist1[u]+1;
            }
        }
    }
}

int solve()
{
    int MAX = -554;
    for(int i = 0;i<sizeof(dist1)/sizeof(dist1[0]);i++)
    {
        int x = dist[i]+dist1[i];
        MAX = max(MAX,x);
    }
    return MAX;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,T,r,src,dst;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        Clear();
        cin>>n>>r;
        while(r--)
        {
            int x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        cin>>src>>dst;
        bfs(src);
        bfss(dst);
        cout<<"Case "<<t<<": "<<solve()<<endl;
    }
    return 0;
}
