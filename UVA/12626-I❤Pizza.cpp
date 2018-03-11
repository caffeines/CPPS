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
    int n;
    char x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int counter=0;
        bool flag = false;
        map <char,int> m;
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
             m[s[j]]++;
        }
        while(true)
        {
            m['A'] = m['A']-3;
            m['M'] = m['M']-1;
            m['R'] = m['R']-2;
            m['G'] = m['G']-1;
            m['I'] = m['I']-1;
            m['T'] = m['T']-1;
            if(m['A']<0 ||m['R']<0 || m['M']<0 || m['I']<0 || m['G']<0 || m['T']<0)
                break;
            counter++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
