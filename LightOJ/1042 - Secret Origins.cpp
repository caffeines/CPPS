#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int counter(ll n){
    int count = 0;
    for(ll i=1; i<=n; i *=2){
        if(i & n)
            count++;
    }
    return count;
}

ll nextnum(int n){

    ll res = n;
    for(ll i=1;i<=n;i *=2){
        if(i & n){
            res += i;
            break;
        }
    }

    int diff = abs(counter(n) - counter(res));

    for(int i=0; i < diff; i++){
        res += (1<<i);
    }
    return res;

}

int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for(int kase = 1;kase <= t; kase++){
        ll n;
        scanf("%lld",&n);
        printf("Case %d: %lld\n",kase,nextnum(n));

    }
    return 0;
}


