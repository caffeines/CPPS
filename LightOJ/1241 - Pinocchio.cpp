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

    int t;
    scanf("%d",&t);
    for(int kase=1; kase<=t; kase++){
        int n;
        scanf("%d",&n);
        int a[n+2],cnt = 0;
        a[0] = 2;
        for(int i = 1;i<=n;i++){
            scanf("%d",&a[i]);
            if(a[i-1] < a[i]){
                cnt = cnt + ceil( (a[i] - a[i-1])/5.0 );
            }
        }

        printf("Case %d: %d\n",kase,cnt);
    }

    return 0;
}


