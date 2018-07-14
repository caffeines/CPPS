#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;
typedef long long vlong;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int i,t,r1,r2,h,p;
    double R,V;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r1>>r2>>h>>p;
        R= r2 + (r1 - r2) * (double(p)/h);
        V = 1/3.0 * PI * p *( R*R + R*r2 + r2*r2 );
        printf("Case %d: %.7lf\n",i,V);
    }
    return 0;
}

