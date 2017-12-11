#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,holder,x;
    while(cin>>n>>x)
    {
        int counter=0;
        for(int i=1;i<=n;i++)
        {
            holder = n*i;
            if(holder >= x && x%i==0)
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}

