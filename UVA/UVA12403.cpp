#include<bits/stdc++.h>
using namespace std;
int sum=0;
int main()
{
    string str;
    int T,money;
    cin>>T;

    for(int i=1;i<=T;i++)
    {
        cin>>str;
        if(str == "donate")
        {
            cin>>money;
            sum+=money;
        }
        else if(str == "report")
            cout<<sum<<endl;
    }
    return 0;

}

