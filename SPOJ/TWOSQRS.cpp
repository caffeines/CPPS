#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll c,n;
    cin>>c;
    while(c--)
    {
        bool flag = false;
        cin>>n;
        ll sqt = sqrt(n);
        if(sqt*sqt == n)
        {
            flag = true;
            cout<<"Yes"<<endl;
            continue;
        }
        else
        {
            ll temp,tsqt;
            for(ll i=1;i<=sqt;i++)
            {
                temp = n-i*i;
                tsqt = sqrt(temp);
                if(tsqt*tsqt == temp)
                {
                    flag = true;
                    cout<<"Yes"<<endl;
                    break;
                }
            }
        }
        if(!flag)
            cout<<"No"<<endl;
    }
    return 0;
}
