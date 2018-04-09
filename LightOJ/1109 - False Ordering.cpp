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
#define INF (numeric_limits<int>::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define KASE(a) printf("Case %d: ",a);
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020

struct number{
	int num;
	int nod;
}order[1005];

bool compare(number x,number y)
{
	if(x.nod == y.nod)
		return x.num > y.num;
	else
		return x.nod < y.nod;
}

int main()
{

	for(int i=1;i<=1000;i++)
	{
		order[i].num = i;
		int counter=0;

		for(int j=1;j<=1000;j++)
		{
			if(i%j==0)
				counter++;
		}
		order[i].nod = counter;
	}
	sort(order+1,order+1001,compare);

	int n;
	cin>>n;
	kase(i,n)
	{
        int no;
        cin>>no;
        KASE(i);
        cout<<order[no].num<<endl;
	}
    return 0;
}
