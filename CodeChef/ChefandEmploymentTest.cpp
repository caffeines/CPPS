#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,k;
    int arr[1001];
    cin>>T;
    for(int kase=1;kase<=T;kase++)
    {
        cin>>n>>k;
        for(int index =0;index<n;index++)
        {
            cin>>arr[index];
        }
        sort(arr,arr+n);
        int median = (n+k)/2;
        cout<<arr[median]<<endl;

    }
    return 0;
}
