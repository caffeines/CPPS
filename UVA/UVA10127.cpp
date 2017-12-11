#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll num;
    while(cin>>num)
    {
        ll value = 1;
        int digit = 1;
        while(value)
        {
            digit++;
            value = ((value*10)+1)%num;
        }
        cout<<digit<<endl;
    }
    return 0;
}

