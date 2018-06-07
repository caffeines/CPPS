#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int T;
    cin>>T;
    while(T--)
    {
        map <ll,ll> sum;
        ll n,x, sm = 0,count = 0;
        cin>>n;
        while(n--)
        {
            cin>>x;
            sm += x;
            sum[sm]++;
        }

        map<ll,ll>::iterator it = sum.begin();
        for(it;it!=sum.end();it++)
        {
            ll a = it->first;
            ll b = it->second;

            !a? count += b +(b*(b-1)/2) : count += b*(b-1)/2;
        }
        cout<<count<<endl;
    }

    return 0;
}

