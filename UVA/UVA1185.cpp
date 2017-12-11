#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define sq(a) (a)*(a)
#define pl printf("\n");
#define pf(n) printf("%d",n)
#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf("%d %d",&n,&m)
#define INF (numeric_limits<int>::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define KASE(a) printf("Case %d: ",a);
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,T;ll digit=1;
    sf(T);
    kase(t,T)
    {
        sf(n);
        if(n==1) goto end;
        digit = floor((log(2*3.1416*n)/2+n*(log(n)-1))/log(10))+1;
        end: pf(digit);pl;
    }
    return 0;
}
