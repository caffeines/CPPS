#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    a=abs(a),b=abs(b);
    while(b)
    {
        a = a%b;
        swap(a,b);
    }
    return a;
}
int main()
{
    ll T,x1,y1,x2,y2;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        ll result = (gcd(abs(y2-y1),abs(x2-x1)))+1;
        cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
}
