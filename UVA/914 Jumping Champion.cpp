/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
#define all(x)        (x).begin(),(x).end()
#define ABS(x)        ((x)<0?-(x):(x))
#define FABS(x)       ((x)+eps<0?-(x):(x))
#define F             first
#define FasterIO      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(i,x,y)    for(ull i = (x) ; i <= (y) ; ++i)
#define kase(a,t)     for(int a = 1 ; a <= (t) ; ++a)
#define LB(a,key)     lower_bound(a.begin(),a.end(), key) -a.begin()
#define LEFTMOST      ((63-__builtin_clzll((x)))
#define MOD(x,y)      (((x)*(y))%mod)
#define MIN(a,b)      ((a)<(b)?(a):(b))
#define MAX(a,b)      ((a)>(b)?(a):(b))
#define MP            make_pair
#define mem(x,y)      memset(x,y,sizeof(x))
#define NORM(x)       if(x>=mod)x-=mod
#define NUMDIGIT(x,y) (((ll)(log10((x))/log10((y))))+1)
#define ODD(x)        (((x)&1)==0?(0):(1))
#define pb            push_back
#define pl            cout<<endl
#define pcase(t)      cout<<"Case "<<t<<": "
#define phl printf    ( "hello\n" )
#define POPCOUNT      __builtin_popcountll
#define ROF(i,x,y)    for(ull i = (y) ; i >= (x) ; --i)
#define RIGHTMOST     __builtin_ctzll
#define REP(i,y)      for(ull i = 0 ; i < (y) ; ++i)
#define S             second
#define Size          1001
#define SQ(x)         ((x)*(x))
#define SZ(x)         ((vlong)(x).size())
#define UB(a,key)     upper_bound(a.begin(),a.end(), key) -a.begin()
#define Unique(V)     (V).erase(unique((V).begin(),(V).end()),(V).end())
#define valid(i,j)    (i >= 0 && j>= 0 && i < 1001 && j < 1001)
#define check(i, j)   ((i >= 0 && i < R) && (j >= 0 && j < C))

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

template < typename T> inline T LCM(T x, T y)
{
    T g = GCD(x,y);
    return x*(y/g);
}

template < typename T> inline T GCD(T a, T b)
{
    a=ABS(a), b=ABS(b);
    return !b ? a : GCD(b,a%b);
}

template < typename T> inline T power(T b,T p)
{
    T res = 1, x = b;
    while ( p )
    {
        if ( p & 1 )
            res = ( res * x );
        x = ( x * x );
        p >>= 1;
    }
    return res;
}

template < typename T> inline T bigmod (T b, T p, T m)
{
    T res = 1 % m, x = b % m;
    while ( p )
    {
        if ( p & 1 )
            res = ( res * x ) % m;
        x = ( x * x ) % m;
        p >>= 1;
    }
    return res;
}

/*===================================================================================================================
                                stop doubting yourself, work hard and make it happen.
=====================================================================================================================*/

#define N 1000020
vector <int> IsPrime(N);
vector <int> Prime;
map <int ,int> mm;
void sieve()
{
    IsPrime[0]=IsPrime[1]=1;
    for(int i=4;i<N;i+=2)
        IsPrime[i] = 1;

    int SQT = sqrt(N);
    for(int i=3;i<=SQT;i+=2)
    {
        if(IsPrime[i]==0)
        {
            for(int j=i*i;j<=N;j+=2*i)
                IsPrime[j] = 1;
        }
    }
}

int main()
{
    sieve();
    FasterIO;
    #ifdef caffeines
    //freopen("input1.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    int T,l,u;
    cin>>T;
    FOR(t,1,T)
    {
        mm.clear();
        cin>>l>>u;
        map<int, int >::iterator it;

        for(int i=l;i<=u;i++)
        {
            if(!IsPrime[i])
            {
                for(int j=i+1;j<=u;j++)
                {
                    if(!IsPrime[j])
                    {
                        mm[j-i]++;
                        break;
                    }
                }
            }

        }
        int mx = -1,x,flag=1;
        if(mm.size()>0)
        {
            for(it=mm.begin();it != mm.end();it++)
            {
                if(it->S == mx) flag = 0;
                else if(it->S > mx)
                {
                    mx = it->S;
                    x = it->F;
                    flag = 1;
                }
            }
            if(!flag)
            {
                cout<<"No jumping champion"<<endl;
            }
            else
                cout<<"The jumping champion is "<<x<<endl;
        }
        else
        {
            cout<<"No jumping champion"<<endl;
        }



    }

    return 0;
}
