#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
#define sq(a) (a)*(a)
#define INF (numeric_limits<int>::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020

map <char,int> MAP;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
            MAP[s[i]]++;
    }
    int sum=min(MAP['L'],MAP['R'])+min(MAP['U'],MAP['D']);

        cout<<sum*2<<endl;
    return 0;
}
