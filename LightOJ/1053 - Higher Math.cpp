#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,T;
    bool flag = false;
    cin>>T;
    for(int i = 0;i<T;i++)
    {
        cin>>a>>b>>c;
        if(a*a+b*b==c*c || a*a==b*b+c*c || a*a+c*c==b*b)
            cout<<"Case "<<i+1<<": yes"<<endl;
        else
            cout<<"Case "<<i+1<<": no"<<endl;
    }

    return 0;
}

