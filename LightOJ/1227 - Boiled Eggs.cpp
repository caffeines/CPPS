#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T,n,p,q,k;
    int arr[101];
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int sum =0,counter=0;
        cin>>n>>p>>q;
        for(k=0;k<n;k++)
        {
            cin>>arr[k];
        }
        for(k=0;k<p && k<n;k++)
        {

            sum+=arr[k];
            if(sum<=q)
                counter++;
        }

        cout<<"Case "<<i<<": "<<counter<<endl;

    }
    return 0;
}

