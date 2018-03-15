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
#define mem(a) memset(a,0,sizeof(a))
#define sff(n,m) scanf("%d %d",&n,&m)
#define slff(n,m) scanf("%lld %lld",&n,&m)

/*=========================================================
    stop doubting yourself, work hard and make it happen.
==========================================================*/

int IsPrime[N];
vector <int> Prime;

void sieve()
{
    IsPrime[0]=IsPrime[1]=1;
    for(int i=2;i<N;i+=2)
        IsPrime[i] = 1;

    int SQT = sqrt(1.0*N);
    for(int i=3;i<=SQT;i+=2)
    {
        if(IsPrime[i]==0)
        {
            for(int j=i*i;j<N;j+=2*i)
                IsPrime[j] = 1;
        }
    }
    // sieve ends here

    Prime.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(IsPrime[i]==0)
            Prime.push_back(i);
    }
}

int dist [N],s,t;

void bfs(int start)
{
	queue <int> q;
	q.push(start);
	dist[start] = 0;

    while(!q.empty())
    {
        int current = q.front(); q.pop();

        for(int i = 0; i<Prime.size() && Prime[i]<current; i++)
        {
        	if(current%Prime[i]==0)
			{
				int nxt = current + Prime[i];
				if(nxt<=t&&dist[nxt] == -1 )
				{
					dist[nxt] = dist[current] + 1;
					q.push(nxt);
				}
			}
        }
    }
}

void Clear()
{
    memset(dist,-1,sizeof(dist));
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	sieve();
	int T;
	scanf("%d",&T);
	for(int i = 1; i<=T; i++)
	{
		Clear();
		scanf("%d%d",&s,&t);
		bfs(s);
		printf("Case %d: %d\n",i,dist[t]);
	}
}
