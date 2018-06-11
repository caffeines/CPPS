#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double pi = acos(-1);

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    int tc;
    scanf("%d",&tc);
    for(int t=1; t<=tc; t++){
        double areaOfCircle,areaOfSquare,r;
        scanf("%lf",&r);
        areaOfCircle = pi*r*r;
        areaOfSquare = 4*r*r;

        printf("Case %d: %.2lf\n",t,areaOfSquare - areaOfCircle);

    }

    return 0;
}


