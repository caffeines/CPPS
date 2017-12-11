#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    int t,q=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        cout<<"Case "<<q++<<": "<<arr[1]<<endl;
    }
    return 0;
}
