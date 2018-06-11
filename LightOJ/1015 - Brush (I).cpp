#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,sum,input;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        sum = 0;
        cin>>n;
        for(int k=0;k<n;k++)
        {
            cin>>input;
            if(input>0)
                sum+=input;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }


    return 0;
}
