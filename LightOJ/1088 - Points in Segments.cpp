#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    cin>>t;
    for( int kase = 1; kase <= t; kase++ ) {
        vector <int> v;
        int n, q, l, r;
        scanf("%d %d", &n, &q);
        for( int i  = 0, a; i < n; i++ ){
            scanf("%d",&a);
            v.push_back(a);
        }
        printf("Case %d:\n",kase);
        for(int i = 0; i < q; i++ ) {
            scanf("%d %d",& l, &r);
            int lo,hi;
            lo = lower_bound(v.begin(), v.end(), l) - v.begin();
            hi = upper_bound(v.begin(), v.end(), r) - v.begin();
            printf("%d\n",hi - lo);
        }

    }

    return 0;
}


