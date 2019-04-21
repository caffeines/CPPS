#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL dp[1000005];
int a, b, c, d, e, f, g, h;
LL fn( int i ) {
    if( i == 0 ) dp[i] = a;
    if( i == 1 ) dp[i] = b;
    if( i == 2 ) dp[i] = c;
    if( i == 3 ) dp[i] = d;
    if( i == 4 ) dp[i] = e;
    if( i == 5 ) dp[i] = f;
    if( i == 6 ) dp[i] = g;
    if( i == 7 ) dp[i] = h;

    if(dp[i] == -1) {
        dp[i] = ( fn(i-1)% 10000007 + fn(i-2)% 10000007 + fn(i-3)% 10000007 +
                 fn(i-4)% 10000007 + fn(i-5)% 10000007 + fn(i-6)% 10000007 +
                 fn(i-7)% 10000007 + fn(i-8)% 10000007 )% 10000007;
    }
    return dp[i]% 10000007;
}

int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        memset(dp, -1, sizeof(dp));
        scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n));
    }
    return 0;
}
