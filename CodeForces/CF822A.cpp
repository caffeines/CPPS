#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b;
    cin>>a>>b;
    int M = min(a,b);
    int res = 1;
    while(M>1)
    {
        res *=M;
        M--;
    }
    cout<<res<<endl;
    return 0;
}

