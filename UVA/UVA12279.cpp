#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,num,diche,kase=0;
    while(cin>>n)
    {
        if(n==0) break;
        int diche=0,dibe=0;
        for(int i=1;i<=n;i++)
        {
            cin>>num;
            if(num==0)
                diche++;
            else
                dibe++;
        }
        int balance = dibe - diche;
        cout<<"Case "<<++kase<<": "<<balance<<endl;
    }
    return 0;
}
