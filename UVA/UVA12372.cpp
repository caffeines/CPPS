#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,l;
    int T;
    cin>>T;

    for(int i=1;i<=T;i++)
    {
        cin>>l>>h>>w;
        if(h<=20 && w<=20 && l<=20)
            cout<<"Case "<<i<<": good"<<endl;
        else
            cout<<"Case "<<i<<": bad"<<endl;
    }
    return 0;

}


