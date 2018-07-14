#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int count(int n){
    int cnt = 0;
    while(n){
        cnt += (n & 1);
        n >>= 1;
    }
    return cnt;
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
    for(int kase=1;kase<=t;kase++){
        int n;
        scanf("%d",&n);
        printf("Case %d: ",kase);
        count(n)%2? printf("odd\n"):printf("even\n");
    }
    return 0;
}


