#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(ll a, ll b)
{
    return a<b;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,k;
    while(cin>>n>>k)
    {
        vector <ll> v;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if(i*i != n)
                {
                    v.push_back(n/i);
                }
            }
        }
        if(k>v.size())
            cout<<"-1"<<endl;
        else
        {
            nth_element(v.begin(),v.begin()+k-1,v.end());
            cout<<v[k-1]<<endl;
        }
    }
    return 0;
}

