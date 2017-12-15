#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int k;
    while(cin>>k and k!=0)
    {
        int n,m,x,y,t=k;
        cin>>n>>m;
        while(t--)
        {
            cin>>x>>y;
            x -= n;
            y -= m;
            if(x==0 or y==0)
                cout<<"divisa"<<endl;
            else if(x>0 and y>0)
                cout<<"NE"<<endl;
            else if(x<0 and y>0)
                cout<<"NO"<<endl;
            else if(x<0 and y<0)
                cout<<"SO"<<endl;
            else
                cout<<"SE"<<endl;
        }
    }
    return 0;
}

