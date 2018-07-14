#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll r1,c1,r2,c2;
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>r1>>c1>>r2>>c2;
        cout<<"Case "<<t<<": ";
        if(r1==r2 && c1==c2)
            cout<<"0"<<endl;
        else if((r1+r2+c1+c2)%2==0)
        {
            if(abs(r1-r2)==abs(c1-c2))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else cout<<"impossible"<<endl;

    }
    return 0;
}


