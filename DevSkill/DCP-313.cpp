#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    getchar();
    while(T--)
    {
        string in;
        getline(cin,in);
        if(in=="Easy Problem")
            cout<<"20"<<endl;
        else if(in=="Medium Problem")
            cout<<"40"<<endl;
        else if(in=="Hard Problem")
            cout<<"68"<<endl;
    }
    return 0;
}
