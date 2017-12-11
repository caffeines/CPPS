#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N =   1000005;
ll prime[1000005];
void seive()
{
    prime[0]=prime[1]=1;
    for(int index=4;index<N;index+=2)
        prime[index] = 1;
    for(int o=3;o*o<=N;o+=2)
    {
        if(prime[o]==0)
        {
            for(int i=o*o;i<=N;i+=2*o)
            {
                prime[i] = 1;
            }
        }
    }
}

int main()
{
    seive();
    char str[100];
    ll n;
    while(cin>>n)
    {
        if(prime[n]==1)
            cout<<n<<" is not prime."<<endl;
        else
        {
            int q=0;
            string val;
            stringstream ss;
            ss << n;
            val = ss.str();
            reverse(val.begin(),val.end());

            stringstream ls(val);
            ll next;
            ls>>next;

            if(next != n)
            {
                if(prime[next] ==0 && prime[n]==0)
                {
                    cout<<n<<" is emirp.\n";
                    continue;
                }
            }
            if(prime[n]==0)
                cout<<n<<" is prime.\n";
        }
    }
    return 0;
}

