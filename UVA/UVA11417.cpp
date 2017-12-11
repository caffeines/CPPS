#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int T;
    while(cin>>T)
    {
        int g=0;
        if(T==0)break;
        for(int i=1;i<T;i++)
        {
            for(int j=i+1;j<=T;j++)
                g+=__gcd(i,j);
        }
        printf("%d\n",g);
    }

    return 0;
}