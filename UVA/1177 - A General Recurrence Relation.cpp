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

#define mxr 5 /// change here
#define mxc 5

struct matrix{
    int R,C;
    double m[mxr][mxc];
    matrix(){}
    matrix(int R, int C){
        this->R = R;
        this->C = C;
    }

    void assign(int r, int c){
        R = r;
        C = c;
    }

    void matmem(){
        memset(m,0,sizeof m);
    }

    void identity(){
        matmem();
        for ( int i = 0; i < R; i++ )
           m[i][i] = 1;
    }

    void print() { ///For debugging purpose
        for ( int i = 0; i < R; i++ ){
            for ( int j = 0; j < C; j++ ){
                cout<<m[i][j]<<" ";
            }
            printf ( "\n" );
        }
        cout<<endl;
    }
};

matrix multiply(matrix a, matrix b){
    matrix res(a.R, b.C);
    for(int r1 = 0; r1<a.R; r1++){
        for(int c1 = 0; c1<a.C; c1++){
            res.m[r1][c1] = 0;
            for(int k = 0; k<a.C; k++){
                res.m[r1][c1] += (a.m[r1][k] * b.m[k][c1]); /// mod here if needed
            }
        }
    }
    return res;
}


matrix bigMatMod(matrix a, ll p){
    if(p == 1) return a;
    if(p%2 == 1) {
        return multiply(a, bigMatMod(a, p-1));
    }
    else {
        matrix res = bigMatMod(a, p/2);
        return multiply(res, res);
    }
}


matrix A, B, X;
ll f0, f1; /// x = | f1 |
           ///     | f0 |

double a, b;

void buildMatrix(){
    /// Set row column accordingly
    A.assign(2, 2);
    B.assign(2, 1);

    /// Store initial values in the matrix
    A.m[0][0] = a;
    A.m[0][1] = b;
    A.m[1][0] = 1;
    A.m[1][1] = 0;

    X.m[0][0] = f1;
    X.m[1][0] = f0;
}


int main()
{
    FasterIO;
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    ll t,n;
    cin>>t;
    for(int kase=1;kase<=t;kase++){
        cin>>f0>>f1>>a>>b>>n;
        if(n==0){
            cout<<f0<<endl;
            continue;
        }
        if(n==1){
            cout<<f1<<endl;
            continue;
        }

        buildMatrix();
        B = bigMatMod(A, n-1);
        B = multiply(B, X);

        ll res = round(B.m[0][0]);
        cout<<res<<endl;
    }
    return 0;
}
