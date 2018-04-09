#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define kase(i,b) for(int i=1;i<=b;i++)
#define N 1000020
vector <int> IsPrime(N);
vector<int> Prime;
vector<int> Factor;

void seive()
{
    IsPrime.clear();
    IsPrime[0]=IsPrime[1]= 1;
    for(int i=4;i<=N;i+=2)
        IsPrime[i]=1;

    int SQT = sqrt(N);
    IsPrime[2] = 0;

    for(int i=3;i<=SQT;i+=2)
    {
        if(IsPrime[i]==0)
        {
            for(int j= i*i ; j<=N ; j+=2*i)
            {
                IsPrime[j] = 1;
            }
        }

    }
    Prime.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(IsPrime[i]==0)
            Prime.PB(i);
    }
}
void factorize(int n)
{
    Factor.clear();
    int SQT = sqrt(n);
    for(int i=0;i<=Prime.size() && Prime[i]<=SQT;i++)
    {
        if(n%Prime[i]==0)
        {
            while(n%Prime[i]==0)
            {
                n /= Prime[i];
                Factor.PB(Prime[i]);
            }
        }
        SQT = sqrt(n);
    }
    if(n != 1)
        Factor.PB(n);

}

int main()
{
    int n;
    seive();
    while(cin>>n && n!=0)
    {
        cout<<n<<" = ";
        if(n<0)
        {
            if(n != -1)
                cout<<"-1 x ";
            if(n==-1)
                cout<<"-1"<<endl;
            n = abs(n);

        }
        factorize(n);
        for(int i=0;i<Factor.size();i++)
        {
            if(i+1 <= Factor.size()-1)
                cout<<Factor[i]<<" x ";
            else
                cout<<Factor[i]<<endl;
        }
    }
    return 0;
}