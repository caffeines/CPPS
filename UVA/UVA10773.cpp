#include <bits/stdc++.h>
using namespace std;
#define kase(i,b) for(int i=1;i<=b;i++)
#define KASE(a) printf("Case %d: ",a)
int main()
{
    int T;
    cin>>T;
    kase(t,T)
    {
        double u,v,d,fast,slow;
        cin>>d>>v>>u;
        KASE(t);
        if(u<=v || u==0 || v==0)
            cout<<"can't determine"<<endl;
        else
        {
            fast = d/u;
            slow = d/sqrt((u*u) - (v*v));
            printf("%.3lf\n",fabs(fast-slow));
        }
    }
    return 0;
}
