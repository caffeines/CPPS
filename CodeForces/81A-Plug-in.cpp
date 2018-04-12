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

    string str;
    stack <char> st;
    stack <char> st2;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(!st.empty())
        {
            if(st.top() == str[i])
            {
                st.pop();
                continue;
            }
        }
        st.push(str[i]);
    }
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.top();
        st2.pop();
    }
    pl;

    return 0;
}

