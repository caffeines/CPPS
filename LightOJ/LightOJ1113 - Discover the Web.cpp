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
    for(int t=1; t<=T;t++)
    {
        printf("Case %d:\n",t);
        stack <string> frd;
        stack <string> bck;
        string com,url,curr;
        curr = "http://www.lightoj.com/";
        while(1)
        {
            cin>>com;
            if(com=="QUIT")
                break;
            if(com == "VISIT")
            {
                cin>>url;
                bck.push(curr);
                curr = url;
                if(!frd.empty())
                {
                    while(!frd.empty())
                        frd.pop();
                }
                cout<<curr<<endl;
            }

            else if(com == "BACK")
            {
                if(bck.empty())
                    pf("Ignored\n");
                if(!bck.empty())
                {
                    frd.push(curr);
                    curr = bck.top();
                    bck.pop();
                    cout<<curr<<endl;
                }
            }

            else if(com == "FORWARD")
            {
                if(frd.empty())
                    pf("Ignored\n");
                if(!frd.empty())
                {
                    bck.push(curr);
                    curr = frd.top();
                    frd.pop();
                    cout<<curr<<endl;
                }
            }

        }

    }
    return 0;
}
