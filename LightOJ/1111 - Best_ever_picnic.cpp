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
#define Size 1010
#define ll long long
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

vector <int> graph[Size];
bool visited[Size];
int freq[Size];
int n,k,m,c=0;
void dfs(int x)
{
    visited[x] = true;
    freq[x]++;
    if(freq[x] == k) c++;
    for(int i = 0;i<graph[x].size();i++)
    {
        if(!visited[graph[x][i]])
        {
            dfs(graph[x][i]);
        }
    }
}
void Clear()
{
    for(int i=0;i<=Size;i++)
    {
        graph[i].clear();
    }
    memset(visited,false,sizeof(visited));
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    scanf("%d",&T);
    for(int kase=1;kase<=T;kase++)
    {
        memset(freq,0,sizeof(freq));
        scanf("%d %d %d",&k,&n,&m);

        int a[k]; c=0;

        for(int i=0;i<k;i++)
            scanf("%d",&a[i]);

        while(m--)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
        }
        for(int i=0;i<k;i++)
        {
            memset(visited,false,sizeof(visited));
            dfs(a[i]);
        }
        cout<<"Case "<<kase<<": "<<c<<endl;
        Clear();
    }
    return 0;
}
