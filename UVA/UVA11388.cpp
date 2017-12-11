#include <bits/stdc++.h>
#define ll long long
using namespace std;

int GCD(int a,int b)
{
    int gcd = __gcd(a, b);
    return gcd;
}
int LCM(int a,int b)
{
    return (a / GCD(a, b)) * b;
}

int main()
{
    int G,L,T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>G>>L;
        if(LCM(G,L)==L && GCD(G,L)==G)
            cout<<G<<" "<<L<<"\n";
        else
            printf("-1\n");
    }
    return 0;
}