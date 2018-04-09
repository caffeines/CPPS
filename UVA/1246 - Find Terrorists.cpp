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
vector <int> all;
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
    all.clear();
    if(low==0) ++low;
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
        if(IsPrime[res]==0)
            all.PB(q);
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
        if((low<=1 && up<=1) || (low>up))
        {
            cout<<"-1"<<endl;
            continue;
        }
        factorize(low,up);
        if(all.size()==0)
        {
            cout<<"-1"<<endl;
        }
        for(int i=0;i<all.size();i++)
        {
            if(i+1 != all.size())
                cout<<all[i]<<" ";
            else cout<<all[i]<<endl;
        }
    }
    return 0;
}
