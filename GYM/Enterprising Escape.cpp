/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
#define all(x)                                 (x).begin(),(x).end()
#define ABS(x)                                      ((x)<0?-(x):(x))
#define FABS(x)                                 ((x)+eps<0?-(x):(x))
#define F                                                      first
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(i,x,y)                 for(ull i = (x) ; i <= (y) ; ++i)
#define kase(a,t)                    for(int a = 1 ; a <= (t) ; ++a)
#define LB(a,key)     lower_bound(a.begin(),a.end(), key) -a.begin()
#define LEFTMOST                          ((63-__builtin_clzll((x)))
#define MOD(x,y)                                     (((x)*(y))%mod)
#define MIN(a,b)                                   ((a)<(b)?(a):(b))
#define MAX(a,b)                                   ((a)>(b)?(a):(b))
#define MP                                                 make_pair
#define mem(x,y)                               memset(x,y,sizeof(x))
#define NORM(x)                                     if(x>=mod)x-=mod
#define NUMDIGIT(x,y)              (((ll)(log10((x))/log10((y))))+1)
#define ODD(x)                                  (((x)&1)==0?(0):(1))
#define pb                                                 push_back
#define pl                                                cout<<endl
#define pcase(t)                              cout<<"Case "<<t<<": "
#define phl printf                                     ( "hello\n" )
#define POPCOUNT                                __builtin_popcountll
#define ROF(i,x,y)                 for(ull i = (y) ; i >= (x) ; --i)
#define RIGHTMOST                                    __builtin_ctzll
#define REP(i,y)                      for(ull i = 0 ; i < (y) ; ++i)
#define S                                                     second
#define Size                                                    1001
#define SQ(x)                                              ((x)*(x))
#define SZ(x)                                    ((vlong)(x).size())
#define UB(a,key)     upper_bound(a.begin(),a.end(), key) -a.begin()
#define Unique(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define valid(i,j)         (i >= 0 && j>= 0 && i < 1001 && j < 1001)
#define check(i, j)         ((i >= 0 && i < R) && (j >= 0 && j < C))

using namespace std;
typedef long long               ll;
const double            eps = 1e-9;
typedef unsigned long long     ull;
typedef         pair < ll, ll> pll;
typedef        pair < int,int> pii;
typedef             vector<pll> pv;
typedef              vector<ll> vl;
typedef            vector <int> vi;
const int         inf = (int) 10e9;
const ll          INF = (ll) 10e18;
const double PI = 2 * acos ( 0.0 );

int dx[] = {+1,-1,0,0};
int dy[] = {0,0,+1,-1};
int hx[] = {+1,-1,-1,+1,-2,-2,+2,+2};
int hy[] = {+2,+2,-2,-2,+1,-1,+1,-1};
int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1};
int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

template < typename T> inline T LCM(T x, T y) {T g = GCD(x,y); return x*(y/g); }
template < typename T> inline T GCD(T a, T b) {a=ABS(a), b=ABS(b); return !b ? a : GCD(b,a%b); }
template < typename T> inline T power(T b,T p) { T res = 1, x = b; while ( p ) { if ( p & 1 ) res = ( res * x ); x = ( x * x ); p >>= 1;}return res;}
template < typename T> inline T bigmod (T b, T p, T m) { T res = 1 % m, x = b % m; while ( p ) { if ( p & 1 ) res = ( res * x ) % m; x = ( x * x ) % m; p >>= 1; }return res; }

/*==================================================================================================================================================
                                                stop doubting yourself, work hard and make it happen.
===================================================================================================================================================*/

map <char, int> _map;
int mat[1010][1010];
ll dist[1010][1010];
int sx , sy, k, h, w;

struct Node{
    int u,v;
    ll cost;
    Node(){};
    Node(int u,int v, ll cost)
    {
        this->u = u;
        this->v = v;
        this->cost = cost;
    }

    bool operator < (const Node &node) const
    {
        return cost > node.cost;
    }

}curr,nxt;

priority_queue <Node> pq;
ll dijkstra(int sx, int sy)
{
    for( int i = 0; i < 1010; i++ ) {
        for( int j = 0; j < 1010; j++ ) {
            dist[i][j] = INF;
        }
    }

    curr.u = sx;
    curr.v = sy;
    curr.cost = 0;
    dist[sx][sy] = 0;

    pq.push(curr);
    while(!pq.empty())
    {
        curr = pq.top();
        pq.pop();

        for(int i = 0; i < 4; i++ )
        {
            int u = curr.u + dx[i];
            int v = curr.v + dy[i];
            if( u >= 0 && u < h && v >= 0 && v < w ){
                if(dist[u][v] > curr.cost + mat[u][v])
                {
                    dist[u][v] = curr.cost + mat[u][v];
                    pq.push({u, v, dist[u][v]});
                }
            }
        }
    }

    ll res = INF;
    for( int i=0; i < h; i++ ) {
        res = min(res, dist[i][0]);
        res = min(res, dist[i][w-1]);
    }
    for( int i=0; i < w; i++ ) {
        res = min(res, dist[0][i]);
        res = min(res, dist[h-1][i]);
    }
    return res;
}


int main()
{
    FasterIO;
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    cin>>t;
    for( int kase = 1; kase <= t; kase++ ) {
        int n;
        char ch;
        cin>>k>>w>>h;
        for( int i=0; i < k; i++ ) {
            cin>>ch>>n;
            _map[ch] = n;
            //cout<<ch<<" -> "<<_map[ch]<<endl;
        }
        string str;
        for(int i = 0; i < h; i++ ) {
            cin>>str;
            for( int j = 0; j < w; j++ ) {
                ch = str[j];
                mat[i][j] = _map[ch];
                if( ch == 'E'){
                    mat[i][j] = 0;
                    sx = i; sy = j;
                }
                //cout<<mat[i][j];
            }
            //cout<<endl;
        }
        ll res = dijkstra(sx, sy);
        cout<<res<<endl;
    }

    return 0;
}


