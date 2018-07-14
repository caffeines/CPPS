#include <bits/stdc++.h>
using namespace std;
typedef long long vlong;

int solve(vlong a, vlong b){
    int res = 0;

    if(a == b && a%3==0){
        res = 1;
    }

    if( b%3==0 || (b-1)%3==0 ){
        res = b/3;
        res *= 2;
    }
    else if( (b+1)%3==0 ){
        res = b/3;
        res = (res * 2) + 1;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for(int kase = 1; kase <= t; kase++){
        vlong n,m;
        scanf("%lld %lld", &n,&m);

        int res = solve(1,m) - solve(1,n-1);
        printf("Case %d: %d\n",kase,res);

    }
    return 0;
}


