#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, c, d, e, f;

int main() {
    ll in[1000005];
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &in[0], &in[1], &in[2], &in[3], &in[4], &in[5], &n);

        for(int i=6;i<=n;i++)
        {
            in[i] = (in[i-6]%10000007 + in[i-5]%10000007 + in[i-4]%10000007 + in[i-3]%10000007 + in[i-2]%10000007 + in[i-1]%10000007);
        }
        printf("Case %lld: %lld\n", ++caseno,in[n]%10000007);
    }
    return 0;
}
