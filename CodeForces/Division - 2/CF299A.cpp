#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n)
    {
        bool flag = true;
        ll mn = 10E9;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<mn)
                mn = a[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]%mn!=0)
            {
                flag = false;
                break;
            }
        }
        flag==true?
            cout<<mn<<endl: cout<<"-1"<<endl;

    }
    return 0;
}
