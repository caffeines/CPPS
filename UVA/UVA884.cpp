#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000005
vector <int> IsPrime(N);
vector <int> prime;
int res[N];

void seive ()
{
    IsPrime.clear();
    prime.clear();
    IsPrime[0]=IsPrime[1] = 1;
    int SQT = sqrt(N);
    for(int i=4;i<N;i+=2)
        IsPrime[i]=1;
    IsPrime[2] = 0;
    for(int i=3;i<=SQT;i+=2)
    {
        if(IsPrime[i]==0)
        {
            for(int k=i*i;k<=N;k+=2*i)
                IsPrime[k] = 1;
        }
    }
    prime.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(IsPrime[i]==0)
        {
            prime.push_back(i);
        }
    }
}
int countFactor(int n)
{
    int cnt=0;
    int SQTn = sqrt(n);
    for(int i=0; i<prime.size() && (prime[i]<=SQTn);i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cnt++;
            }
            SQTn = sqrt(n);
        }
    }
    if(n!=1)
        cnt++;
    return cnt;
}

void result()
{
    memset(res,0,sizeof(res));
    res[2] = 1;
    for(int i=3;i<N;i++)
    {
        if(IsPrime[i]!=0)
        {
            res[i] = res[i-1]+countFactor(i);
        }
        else
            res[i] = res[i-1]+1;
    }

}
int main()
{
    seive();result();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        cout<<res[n]<<endl;
    }
    return 0;
}
