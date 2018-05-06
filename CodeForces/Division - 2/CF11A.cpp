#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,d,x;
    while(cin>>n>>d>>x)
    {
        ll counter = 0,y;
        for(int i=1;i<n;i++)
        {
            cin>>y;
            if(y<=x)
            {
                ll dif = x - y;
                ll n = (dif/d) + 1;
                counter += n;
                x = (n*d)+y;
            }
            else
                x = y;
        }
        cout<<counter<<endl;
    }
    return 0;
}
