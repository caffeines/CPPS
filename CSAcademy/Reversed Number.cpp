/*===============================================
    Username    : Caffeines
    Name        : Abu Sadat Md. Sayem
    about me    : caffeines.github.io
    University  : North South University (NSU)
=================================================*/

#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define INF 0xfffffff
#define pl printf("\n")
#define pb(x) push_back(x)
#define sf(n) scanf("%d",&n)
#define slf(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define sff(n,m) scanf("%d %d",&n,&m)
#define slff(n,m) scanf("%lld %lld",&n,&m)

/*=========================================================
    stop doubting yourself, work hard and make it happen.
==========================================================*/


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string n;
    cin>>n;
    stringstream fs(n);
    int f; fs>>f;
    reverse(n.begin(),n.end());

    stringstream ss(n);
    ll s; ss>>s;
    //cout<<f<<s<<endl;
    f < s?
        cout<<"1"<<endl:
        cout<<"0"<<endl;

    return 0;
}

