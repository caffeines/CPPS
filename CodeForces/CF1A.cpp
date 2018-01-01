#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll a,n,m;
    while(cin>>n>>m>>a)
    {
        double x,y;
        x = ceil(double(n)/double(a));
        y = ceil(double(m)/double(a));
        ll res = x*y;
        cout<<res<<endl;
    }
    return 0;
}
