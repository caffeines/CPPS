#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int x1[102], x2[102], y1[102], y2[102], z1[102], z2[102];

    int t;
    scanf("%d",&t);
    for(int kase = 1;kase <= t; kase++){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d %d %d %d %d %d", &x1[i], &y1[i], &z1[i], &x2[i], &y2[i], &z2[i]);

        int xLow=0,xHigh=10e4,yLow=0,yHigh=10e4,zLow=0,zHigh=10e4;

        for(int i=0;i<n;i++){
            xLow = max(xLow,x1[i]);
            xHigh = min(xHigh,x2[i]);
            yLow = max(yLow,y1[i]);
            yHigh = min(yHigh,y2[i]);
            zLow = max(zLow,z1[i]);
            zHigh = min(zHigh,z2[i]);
        }

        int volume = (xHigh - xLow) * (yHigh - yLow) * (zHigh - zLow);

        printf("Case %d: %d\n",kase, volume < 0? 0:volume);
    }
    return 0;
}

