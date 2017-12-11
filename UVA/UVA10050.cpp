#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define sq(a) (a)*(a)
#define INF (numeric_limits::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020
set <int> hartal;

int main()
{
    int T;
    cin>>T;
    kase(test,T)
    {
        hartal.clear();
        int n,p;
        cin>>n>>p;
        int arr[p];
        for(int i=0;i<p;i++)
            cin>>arr[i];
        for(int i=0;i<p;i++)
        {
            for(int k=arr[i];k<=n;k +=arr[i])
            {
                if(k%7 != 0 && k%7 != 6)
                    hartal.insert(k);
            }
        }
        cout<<hartal.size()<<endl;
    }
    return 0;
}
