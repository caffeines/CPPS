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
#define N 100007
vector <int> graph[N],v; //array of vector to store node
bool visited [N]; //marker for nodes
int sum = 0;
void dfs(int curr)
{
    sum++;
    visited[curr] = true; //marking current node as visited
    for(int i=0;i<graph[curr].size();i++) //looping through all the adjacent nodes
    {
        if(!visited[graph[curr][i]]) //checking if we found any adjacent node is not visited
        {
            dfs(graph[curr][i]); //visiting the not visited node
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,P,x,y;
    ll ans=0;
    sff(n,P);
    while(P--)
    {
        sff(x,y);
        graph[x].pb(y);
        graph[y].pb(x);
    }

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            sum = 0;
            dfs(i);
            v.pb(sum);
        }
    }

    for(int i=0;i<v.size();i++)
        ans += v[i] * (n-v[i]);

    pf("%lld",ans/2);

    return 0;
}

