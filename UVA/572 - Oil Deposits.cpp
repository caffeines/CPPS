/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
using namespace std;

#define N 111
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
#define check(i, j) ((i >= 0 && i < R) && (j >= 0 && j < C) && !visited[i][j])

/*=========================================================
    stop doubting yourself, work hard and make it happen.
==========================================================*/
int R,C;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
char graph[N][N];
bool visited[N][N];

void dfs(int x,int y)
{
    visited[x][y] = true;

    for(int i=0;i<8;i++)
    {
        int X = x + fx[i];
        int Y = y + fy[i];
        if(check(X,Y) and graph[X][Y]=='@')
        {
            visited[X][Y] = true;
            dfs(X,Y);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);


    string str;
    while(cin>>R>>C and R)
    {
        memset(visited,false,sizeof(visited));
        getchar();
        int counter=0;
        for(int i=0;i<R;i++)
        {
            getline(cin,str);
            for(int j=0;j<C;j++)
            {
                graph[i][j] = str[j];
            }
        }
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                if(!visited[i][j] && graph[i][j] != '*')
                {
                    dfs(i,j);
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }


    return 0;
}
