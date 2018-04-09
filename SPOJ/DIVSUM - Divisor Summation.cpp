#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum[500001];
ll div_sum()
{
    for(int i=2;i<=500001;i++)
        sum[i]=1;
    for(int i=1;i<=500001;i++)
    {
        for(int k=2;k*k<=i;k++)
        {
            if(i%k==0)
            {
                int q = i/k;
                sum[i]+=q;
                if(q*q != i)
                    sum[i]+=k;
            }

        }
    }

}
int main()
{
    int n,t;
    div_sum();
    cin>>t;
    for (int i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%lld\n",sum[n]);
    }

    return 0;
}

