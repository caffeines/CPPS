#include <bits/stdc++.h>
using namespace std;
#define N 1000020

vector <int> IsPrime(N);
vector <int> Prime;
int cnt[N];

void sieve()
{
    IsPrime[0]=IsPrime[1]=1;
    for(int i=2;i<N;i+=2)
        IsPrime[i] = 1;

    int SQT = sqrt(N);
    for(int i=3;i<=SQT;i+=2)
    {
        if(IsPrime[i]==0)
        {
            for(int j=i*i;j<=N;j+=2*i)
                IsPrime[j] = 1;
        }
    }
    // sieve ends here

    Prime.push_back(1); cnt[1]++;
    Prime.push_back(2);cnt[2]++;
    int x = 2;;
    for(int i=3;i<N;i++)
    {
        if(IsPrime[i]==0)
        {
            Prime.push_back(i);
            x++;
        }
        cnt[i] = x;
    }
}
int main()
{
    sieve();
    //freopen("input.txt","r",stdin);
    int n,c;
    //cout<<cnt[21]<<endl;
    while(cin>>n>>c)
    {
        cout<<n<<" "<<c<<": ";
        int x = cnt[n],centre;
        int p = 2 * c,q=0;
        if(p>x)
        {
            for(int i=0;Prime[i]<=n;i++)
            {
                if(Prime[i+1]<=n)
                    cout<< Prime[i]<<" ";
                else
                    cout<<Prime[i]<<endl;
            }
        }
        else
        {
            if(x%2)
            {
                p--;
                centre = abs(x-p)/2;

            }
            else
            {
                centre = abs(x-p)/2;
            }
            for(int i = centre;q<p and Prime[i]<=n;i++)
            {
                if(q<p-1 and Prime[i+1]<=n)
                    cout<<Prime[i]<<" ";
                else
                    cout<<Prime[i]<<endl;
                q++;
            }
        }
        cout<<endl;
    }
    return 0;
}
