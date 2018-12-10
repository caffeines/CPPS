# include <bits/stdc++.h>

using namespace std;

# define all(x)       (x).begin(),(x).end()
# define ABS(x)       ((x)<0?-(x):(x))
# define check(i, j)  ((i >= 0 && i < R) && (j >= 0 && j < C))
# define FABS(x)      ((x)+eps<0?-(x):(x))
# define F            first
# define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define FOR(i, x, y) for(ull i = (x) ; i <= (y) ; ++i)
# define kase(a, t)   for(int a = 1 ; a <= (t) ; ++a)
# define LB(a, key)   lower_bound(a.begin(),a.end(), key) -a.begin()
# define LEFTMOST     ((63-__builtin_clzll((x)))
# define MOD(x, y)    (((x)*(y))%mod)
# define MIN(a, b)    ((a)<(b)?(a):(b))
# define MAX(a, b)    ((a)>(b)?(a):(b))
# define MP           make_pair
# define mem(x, y)    memset(x,y,sizeof(x))
# define NORM(x)      if(x>=mod)x-=mod
# define NUMDIGIT(x, y)(((ll)(log10((x))/log10((y))))+1)
# define ODD(x)       (((x)&1)==0?(0):(1))
# define pb           push_back
# define pl           cout<<endl
# define pcase(t)     cout<<"Case "<<t<<": "
# define phl          printf( "hello\n" )
# define POPCOUNT     __builtin_popcountll
# define ROF(i, x, y) for(ull i = (y) ; i >= (x) ; --i)
# define RIGHTMOST    __builtin_ctzll
# define REP(i, y)    for(ull i = 0 ; i < (y) ; ++i)
# define S            second
# define Size         1001
# define SQ(x)        ((x)*(x))
# define SZ(x)        ((vlong)(x).size())
# define UB(a, key)   upper_bound(a.begin(),a.end(), key) -a.begin()
# define Unique(V)    (V).erase(unique((V).begin(),(V).end()),(V).end())

struct debugger {
    template<typename T>
    debugger &operator,(const T &v) {
        cerr << v << " ";
        return *this;
    }
} dbg;

# ifdef forthright48

# include <ctime>

clock_t tStart = clock();
# define debug(args...) {dbg,args; cerr<<endl;}
# define timeStamp debug ("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
# define bug printf("%d\n",__LINE__);

# else
# define debug(args...)  // Just strip off all debug tokens
# define timeStamp
# endif

# define gs 1010
//vector <int> graph[gs];
int parent[gs];

void makeSet()
{
    for(int i=0;i < gs;i++)
        parent[i] = i;
}

int setFind(int val)
{
    if(parent[val] == val)
        return val;

    parent[val] = setFind(parent[val]);

    return parent[val];
}

void SetUnion(int a, int b)
{
    int repA = setFind(a);
    int repB = setFind(b);

    if(repA != repB)
        parent[repB] = repA;
}




int main() {

    //FasterIO;
    #ifdef forthright48
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t, m, n, q;
    cin>>t;
    for(int kase = 1; kase <= t; kase++){
        makeSet();
        cout<<"Case "<<kase<<":"<<endl;
        cin>>n>>m>>q;
        for( int i = 0, u, v; i < m; i++ ){
            cin>>u>>v;
            SetUnion(u, v);
        }

        for(int i = 0, u, v; i < q; i++ ){
            cin>>u>>v;
            int x = setFind(u);
            int y = setFind(v);
            if(x == y){
                cout<<"Chicken dinner coming soon!"<<endl;
            }
            else
                cout<<"Eat vegetables!"<<endl;
        }
    }
    return 0;
}





