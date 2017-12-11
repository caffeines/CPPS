#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define kase(i,b) for(int i=1;i<=b;i++)
#define N 10000000
vector<ll> IsPrime(N);
vector<ll> Factor;
vector<ll>Prime;
void seive()
{
    IsPrime.clear();
    IsPrime[0]=IsPrime[1]=1;
    IsPrime[2]=0;Prime.PB(2);
    for(int i=4;i<=N;i+=2)
        IsPrime[i]=1;
    ll SQT = sqrt(N);
    for(int i=3;i<=SQT;i+=2)
    {
        if(IsPrime[i]==0)
        {
            for(int j=i*i;j<=N;j+=2*i)
                IsPrime[j]=1;
        }
    }
    for(int i=3;i<N;i+=2)
    {
        if(IsPrime[i]==0)
            Prime.PB(i);
    }

}
void factorize(ll n)
{
    ll SQT = sqrt(n);
    Factor.clear();
    for(int i=0;i<Prime.size() && Prime[i]<=SQT;i++)
    {
        if(n%Prime[i]==0)
        {
            while(n%Prime[i]==0)
            {
                n /=Prime[i];
                Factor.PB(Prime[i]);
            }
        }
        SQT = sqrt(n);
    }
    if(n!=1)
        Factor.PB(n);
}

int main()
{
    ll n;
    seive();
    while(cin>>n && n!=0)
    {
        n = abs(n);
        if(n==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        factorize(n);
        ll MAX = Factor[0];
        for(int i=1;i<Factor.size();i++)
        {
            if(MAX<Factor[i])
            {
                MAX = Factor[i];
            }
        }
        if(MAX == n || MAX == Factor[0])
            cout<<"-1"<<endl;
        else
            cout<<MAX<<endl;
    }
    return 0;
}





