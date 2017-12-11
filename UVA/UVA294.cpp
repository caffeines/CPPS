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
int num,MAX;
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
void factorize(int low,int up)
{
    MAX = -1;
    for(int q=low;q<=up;q++)
    {
        int n = q;
        int SQT = sqrt(n),res=1;
        for(int i=0;i<Prime.size() && Prime[i]<=SQT;i++)
        {
            if(n%Prime[i]==0)
            {
                int p=0;
                while(n%Prime[i]==0)
                {
                    n /= Prime[i];
                    p++;
                }
                p++;
                res *=p;
            }
            SQT = sqrt(n);
        }
        if(n != 1)
            res *=2;
        if(MAX<res)
        {
            MAX = res;
            num = q;
        }
    }
}
int main()
{
    seive();
    int T;
    cin>>T;
    kase(t,T)
    {
        int up,low;
        cin>>low>>up;
        factorize(low,up);
        cout<<"Between "<<low<<" and "<<up<<", "<< num<<" has a maximum of "<<MAX<<" divisors."<<endl;

    }
    return 0;
}
