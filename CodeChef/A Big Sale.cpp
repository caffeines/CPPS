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
    for(int t=1;t<=T;t++)
    {
        double n,regular_price,given_dis,price_add_dis,final_price;
        double discount,price_after_dis,loss,quan,total_loss = 0.0;

        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>regular_price>>quan>>given_dis;
            price_add_dis = regular_price + ((given_dis * regular_price)/100);
            discount = (given_dis*price_add_dis)/100;
            price_after_dis = price_add_dis - discount;

            loss = regular_price - price_after_dis;
            total_loss = total_loss +(loss*quan)*1.0;

        }
        cout.precision(8);
        cout<<fixed<<total_loss<<endl;
    }


    return 0;
}

