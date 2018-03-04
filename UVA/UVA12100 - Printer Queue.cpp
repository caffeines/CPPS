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
    int T;
    sf(T);
    while(T--)
    {
        queue < pair<int,int> > q;
        vector <int> v;
        int n,index,idx=0,res;
        sff(n,index);
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.pb(p);
            q.push(make_pair(i,p));
        }
        sort(v.begin(),v.end());
        while(true)
        {
            if(q.front().second == v.back())
            {
                if(q.front().first == index)
                {
                    q.pop();
                    v.pop_back();
                    idx++;
                    break;
                }
                else
                {
                    v.pop_back();
                    q.pop();
                    idx++;
                }
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
        cout<<idx<<endl;
    }
}
