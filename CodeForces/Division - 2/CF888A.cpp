#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define sq(a) (a)*(a)
#define INF (numeric_limits<int>::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020

int main()
{
    vector <int> ext;
    int n;
    while(cin>>n)
    {
        ext.clear();
        int extrema=0;
        for(int i=0;i<n;i++)
        {
            int input;
            cin>>input;
            ext.pb(input);
        }
        for(int i=1;i<ext.size()-1;i++)
        {
            if(ext[i]<ext[i-1] && ext[i]<ext[i+1])
                extrema++;
            if(ext[i]>ext[i-1] && ext[i]>ext[i+1])
                extrema++;
        }
        cout<<extrema<<endl;
    }

    return 0;
}

