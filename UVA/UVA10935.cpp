#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define sq(a) (a)*(a)
#define pl printf("\n");
#define pf(n) printf("%d",n)
#define sf(n) scanf("%d",&n)
#define sff(a,b) scanf("%d %d",&a,&b);
#define sfff(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define INF (numeric_limits<int>::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define KASE(a) printf("Case %d: ",a);
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(cin>>n && n!=0)
    {
        vector <int> dc;
        list<int> card;
        for(int i=1;i<=n;i++)
            card.push_back(i);
        while(card.size()>1)
        {
            int s = card.front();
            dc.pb(s);
            card.pop_front();
            s = card.front();
            card.pop_front();
            card.push_back(s);
        }
        if(dc.size()==0)
            cout<<"Discarded cards:";
        else
            cout<<"Discarded cards: ";
        for(int i=0;i<dc.size();i++)
        {
            if(i+1 < dc.size())
                cout<<dc[i]<<", ";
            else
                cout<<dc[i];
        }
        cout<<endl<<"Remaining card: "<<card.front()<<endl;
    }
    return 0;
}
