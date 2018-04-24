#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long p,q,k;
    cin>>p>>q>>k;
    while(k--)
        p>=q? q++: p++;

    cout<<setprecision(10)<<fixed<<p*(q/2.0)<<endl;
}
