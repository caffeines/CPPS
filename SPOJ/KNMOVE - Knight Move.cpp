/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
using namespace std;
#define N 1010
#define sc scanf
#define pf printf
#define ll long long
#define INF 0xfffffff
#define pl printf("\n")
#define pb(x) push_back(x)
#define sf(n) scanf("%d",&n)
#define slf(n) scanf("%lld",&n)
#define mem(a,val) memset(a,val,sizeof(a))
#define sff(n,m) scanf("%d %d",&n,&m)
#define slff(n,m) scanf("%lld %lld",&n,&m)
#define valid(i,j) (i >= 0 && j>= 0 && i < 1001 && j < 1001)


/*=========================================================
    stop doubting yourself, work hard and make it happen.
==========================================================*/
int fx[] = {1,-1,-1,1,-2,-2,2,2};
int fy[] = {2,2,-2,-2,1,-1,1,-1};

struct pos{
    int first;
    int second;
    pos(int first,int second)
    {
        this->first = first;
        this->second = second;
    }
    pos(){};
};

int row,col;
int graph[N][N];
void bfs(int x,int y)
{
    mem(graph,-1);
    queue <pos> q;
    graph[x][y] = 0;
    q.push(pos(x,y));
    while(!q.empty())
    {
        pos curr = q.front(); q.pop();
        int X = curr.first;
        int Y = curr.second;
        for(int i=0;i<8;i++)
        {
            int newx = X + fx[i];
            int newy = Y + fy[i];
            if(valid(newx,newy))
            {
                if(graph[newx][newy] == -1 || graph[newx][newy] > graph[X][Y]+1)
                {
                    graph[newx][newy] = graph[X][Y]+1;
                    q.push(pos(newx,newy));
                }
            }
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bfs(1,1);
    int T;
    sf(T);
    for(int t=1;t<=T;t++)
    {
        sff(row,col);
        pf("%d\n",graph[row][col]);
    }
    return 0;
}

