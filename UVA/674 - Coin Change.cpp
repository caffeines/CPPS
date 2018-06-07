#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 7589

int coin[] = {50,25,10,5,1};
int DP[6][MAX],n;

int CoinChange(int i, int amount)
{
    if(i >= 5) return amount == 0;
    if(DP[i][amount] != -1) return DP[i][amount];
    int ret1=0,ret2=0;

    if(amount - coin[i] >= 0)
        ret1 = CoinChange(i,amount - coin[i]);

    ret2 = CoinChange(i+1,amount);
    DP[i][amount] = ret1 + ret2;

    return DP[i][amount];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    memset(DP,-1,sizeof(DP));
    while(cin>>n)
    {
        cout<<CoinChange(0,n)<<endl;
    }
    return 0;
}


