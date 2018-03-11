/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define N 50010
#define pf printf
#define ll long long
#define INF 0xfffffff
#define pl printf("\n")
#define pb(x) push_back(x)
#define sf(n) scanf("%d",&n)
#define slf(n) scanf("%lld",&n)
#define mem(a,b) memset(a,b,sizeof(a))
#define sff(n,m) scanf("%d %d",&n,&m)
#define slff(n,m) scanf("%lld %lld",&n,&m)

/*=========================================================
    stop doubting yourself, work hard and make it happen.
==========================================================*/

struct Node{
    int id;
    int cost;
    Node(){};
    Node(int id,int cost)
    {
        this->id = id;
        this->cost = cost;
    }

    bool operator < (const Node &node) const
    {
        return cost > node.cost;
    }

}curr,nxt;

vector <pair<int,int> > graph[N];
vector <Node> vec;
int dist[N];
void dijkstra(int source)
{
    dist[source] = 0;
    curr.id = source;
    curr.cost = 0;
    priority_queue < Node> pq;
    pq.push(curr);
    while(!pq.empty())
    {
        curr = pq.top();
        pq.pop();
        if(curr.cost != dist[curr.id])
            continue;
        for(int i = 0;i <graph[curr.id].size();i++)
        {
            nxt.id = graph[curr.id][i].first;
            nxt.cost = graph[curr.id][i].second + dist[curr.id];
            if(dist[nxt.id] > nxt.cost)
            {
                dist[nxt.id] = nxt.cost;
                pq.push(nxt);
            }
        }
    }
}


void Clear()
{
    for(int i = 0;i<N;i++)
        graph[i].clear();
    mem(dist,1);
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T,n,m,s,t,u,v,w;
    sf(T);
    for(int i=1;i<=T;i++)
    {
        Clear();
        sff(n,m);sff(s,t);
        for(int k=0;k<m;k++)
        {
            sff(u,v);sf(w);
            graph[u].pb(make_pair(v,w));
            graph[v].pb(make_pair(u,w));
        }
        dijkstra(s);
        pf("Case #%d: ",i);
        if(dist[t]==dist[50005])
            pf("unreachable\n");
        else
            pf("%d\n",dist[t]);
    }

    return 0;
}
