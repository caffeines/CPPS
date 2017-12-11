#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int n=100;
int prime[n];
void seive()
{
    prime[0] = prime[1] = 1;
    int x;
    for(int i=4;i<=n;i+=2)
        prime[i] = 1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(prime[i] == 0)
        {
            for(int k=i*i;k<=n; k+=2*i)
                prime[k] = 1;
        }
    }
}

int main()
{
    seive();
    int n,m;
    while(cin>>n>>m)
    {
        bool flag = false;
        int counter =0;
        if(prime[m]==0)
        {
            for(int k=n+1;k<=m;k++)
            {
                if(prime[k]==0)
                {
                    if(k == m)
                        flag = true;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

