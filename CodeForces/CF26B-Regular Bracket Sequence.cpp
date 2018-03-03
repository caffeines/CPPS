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
    stack <char> st;
    char ch; int cnt = 0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        ch = str[i];
        if(!st.empty())
        {
            if(ch==')' and st.top()=='(')
            {
                st.pop();
                cnt+=2;
                continue;
            }
        }
        st.push(ch);
    }
    cout<<cnt<<endl;
    return 0;
}

