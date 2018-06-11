#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 400000

/// complex input - output

int coin[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10,5};
ll  DP[12][MAX],n;

ll CoinChange(int i, int amount)
{
    if(i >= 11) return amount == 0;
    if(DP[i][amount] != -1) return DP[i][amount];
    ll ret1=0,ret2=0;

    if(amount - coin[i] >= 0)
        ret1 = CoinChange(i,amount - coin[i]);

    ret2 = CoinChange(i+1,amount);
    DP[i][amount] = ret1 + ret2;

    return DP[i][amount];
}

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines

    memset(DP,-1,sizeof(DP));
    int a,b;
    while(scanf("%d.%d",&a,&b)!=EOF)
    {
        n = a * 100 + b;
        if(n == 0 ) break;

        printf("%3d.%.2d%17lld\n",a,b,CoinChange(0,n));
    }
    return 0;
}



