#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define kase(i,b) for(int i=1;i<=b;i++)
int main()
{
    int n,free=1000,ex=1000;
    while(cin>>n)
    {
        int cola=n;
        while((n)>=3)
        {
            free = n/3;
            ex = n%3;
            n = free+ex;
            cola+=free;
        }
        if(n==2) ++cola;
            cout<<cola<<endl;
    }
    return 0;
}



