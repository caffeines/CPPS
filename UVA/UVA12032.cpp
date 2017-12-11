#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int a[n+1];
        a[0] = 0;
        for(int k=1;k<=n;k++)
            cin>>a[k];
        int value=0;
        for(int k=1;k<=n;k++)
        {
            int temp = abs(a[k] - a[k-1]);
            value = max(value,temp);
        }
        int ans = value;
        for(int k=1;k<=n;k++)
        {
            int temp = abs(a[k] - a[k-1]);
            if(temp == value)
                value--;
            else if(temp > value)
            {
                ans++;
                break;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}

