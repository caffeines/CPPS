#include <bits/stdc++.h>
using namespace std;
#define kase(i,b) for(int i=1;i<=b;i++)
#define KASE(a) printf("Case %d: ",a)
#define eps 10E-6
const double PI = std::atan(1.0)*4;
int main()
{
    int t;
    scanf("%d",&t);
    kase(T,t)
    {
        double n,R;
        scanf("%lf %lf",&R,&n);
        double angle = PI/n;
        double x = sin(angle);
        double y = (R*x)/(x+1);
        int z = y;
        KASE(T);
        if(fabs(z-y)<=eps)
            printf("%.0lf\n",y);
        else
            printf("%.10lf\n",y);
    }
    return 0;
}
