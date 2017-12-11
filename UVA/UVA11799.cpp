#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,MAX,input;
    cin>>T;
    for(int i = 1;i<=T;i++)
    {
        MAX = 0;
        cin>>n;
        for(int k=0;k<n;k++)
        {
            cin>>input;
            if(MAX < input)
                MAX = input;
        }
        cout<<"Case "<<i<<": "<<MAX<<endl;
    }

    return 0;
}