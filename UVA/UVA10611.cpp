#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (numeric_limits<ll>::max())
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,Q;
    while(cin>>n)
    {
        ll a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>Q;
        ll q[Q];
        for(int i=0;i<Q;i++)
            cin>>q[i];

        for(int i=0;i<Q;i++)
        {
            ll t=-1,s = INF;
            for(int j=0;j<n;j++)
            {
                if(q[i]>a[j] && t<a[j])
                    t = a[j];
                if(q[i]<a[j] && s>a[j])
                    s = a[j];
            }
            if(t != -1) cout<<t<<" ";
            else cout<<"X ";
            if(s != INF) cout<<s<<endl;
            else cout<<"X"<<endl;
        }
    }
    return 0;
}

