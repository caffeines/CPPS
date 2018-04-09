#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T,M,x1,y1,x2,y2;
    int x,y;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>M;
        cout<<"Case "<<t<<":"<<endl;
        for(int m=1;m<=M;m++)
        {
            cin>>x>>y;
            if(x<x2 && x>x1 && y<y2 && y>y1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            }
    }
    return 0;
}

