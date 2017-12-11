#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==c && a==b && c==b)
            cout<<"*"<<endl;
        else
        {
            if(a==b)
                cout<<"C"<<endl;
            else if(c==b)
                cout<<"A"<<endl;
            else
                cout<<"B"<<endl;
        }
    }
    return 0;
}



