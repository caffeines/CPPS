/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
using namespace std;
#define N 21
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
//#define check (i,j) ((i >= 0 && i < R) && (j >= 0 && j < C) )
/*=========================================================
    stop doubting yourself, work hard and make it happen.
==========================================================*/

int fx[] = {+1,-1,0,0};
int fy[] = {0,0,+1,-1};

int R,C,counter=0;
char graph[N][N]; //array of vector to store node
bool visited [N][N]; //marker for nodes

void dfs(int x,int y)
{
    visited[x][y] = true; //marking current node as visited
    for(int i=0;i<4;i++) //looping through all the neighbor cell
    {
        int X = x + fx[i];
        int Y = y + fy[i];
        if(check(X,Y) and graph[X][Y] == '.') //checking if we found any adjacent node is not visited
        {
            visited[X][Y] = true;
            counter++;
            dfs(X,Y); //visiting the not visited node
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T,px,py;
    sf(T);
    for(int t=1;t<=T;t++)
    {
        counter = 1;
        mem(visited);

        pf("Case %d: ",t);
        sff(C,R);
        getchar();
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                char ch ; scanf("%c",&ch);
                graph[i][j] = ch;
                if(ch=='@')
                {
                    px = i;
                    py = j;
                }

            }
            getchar();
        }
        dfs(px,py);
        pf("%d\n",counter);
    }
    return 0;
}
