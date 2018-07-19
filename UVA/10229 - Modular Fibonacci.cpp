#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MOD;
#define mxr 5 /// change here
#define mxc 5

struct matrix{
    int R,C;
    int m[mxr][mxc]; /// change data type if needed
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
                res.m[r1][c1] += ( (a.m[r1][k] % MOD * b.m[k][c1] % MOD) % MOD ); /// mod here if needed
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
ll f0 = 0, f1 = 1;

void buildMatrix(){
    /// Set row column accordingly
    A.assign(2, 2);
    B.assign(2, 1);

    /// Store initial values in the matrix
    A.m[0][0] = 1;
    A.m[0][1] = 1;
    A.m[1][0] = 1;
    A.m[1][1] = 0;

    X.m[0][0] = f1;
    X.m[1][0] = f0;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines

    ll n;
    while(cin>>n>>MOD){
        MOD = (1<<MOD);
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        if(n==1){
            cout<<1%MOD<<endl;
            continue;
        }
        buildMatrix();

        B = bigMatMod(A, n-1);
        B = multiply(B, X);

        cout<<B.m[0][0]%MOD<<endl;
    }


    return 0;
}


