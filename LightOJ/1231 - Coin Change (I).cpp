#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1001
#define mod 100000007

int coin[51],cnt[51];
int DP[51][51][MAX];
int c,k;

int CoinChange(int i, int t, int amount)
{
    if(i >= c) return amount == 0;
    if(DP[i][t][amount] != -1) return DP[i][t][amount];
    int ret1=0,ret2=0;

    if(amount - coin[i] >= 0 && t<=cnt[i])
            ret1 = CoinChange(i,t+1,amount - coin[i]);

    ret2 = CoinChange(i+1,1,amount);
    DP[i][t][amount] = (ret1 + ret2)%mod;

    return DP[i][t][amount];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines

    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        memset(DP,-1,sizeof(DP));
        cin>>c>>k;

        for(int i=0;i<c;i++) cin>>coin[i];
        for(int i=0;i<c;i++) cin>>cnt[i];

        cout<<"Case "<<t<<": "<<CoinChange(0,1,k)<<endl;
    }
    return 0;
}



