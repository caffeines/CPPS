#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll N =  1000005;
ll prime[1000005];
void seive()
{
    prime[0] = prime[1] = 1;
    for(int i=4;i<N;i+=2)
        prime[i] = 1;

    for(int i=3;i*i<=N;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j = i*i;j<=N;j+=2*i)
            {
                prime[j] = 1;
            }

        }
    }
}
int main()
{
    seive();
    ll T,number;
    cin>>T;
    for(ll index=0;index<T;index++)
    {
        cin>>number;
        ll temp = sqrt(number);

        if(temp*temp == number && prime[temp]==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}

