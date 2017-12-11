#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int b=0,a=0,w=0,t=0,n;
        cin>>n;

        for(int k=1;k<=n;k++)
        {
            char x;
            cin>>x;


                if(x =='B') b++;
                else if(x =='W') w++;
                else if(x =='A') a++;
                else t++;
        }

        if(n==a)
            cout<<"Case "<<i<<": ABANDONED"<<endl;
        else if(w==b)
            cout<<"Case "<<i<<": DRAW "<<b<<' '<<t<<endl;
        else if(w+a==n)
            cout<<"Case "<<i<<": WHITEWASH"<<endl;
        else if(b+a==n)
            cout<<"Case "<<i<<": BANGLAWASH"<<endl;
        else
        {
            if(w<b)
                cout<<"Case "<<i<<": BANGLADESH "<<b<<" - "<<w<<endl;
            else
                cout<<"Case "<<i<<": WWW "<<w<<" - "<<b<<endl;
        }

    }

    return 0;
}


