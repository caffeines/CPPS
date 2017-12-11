#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int> v;
    int n,q,t=1;
    while(cin>>n>>q)
    {
        v.clear();
        if(n==0 && q==0)
            break;
        for(int loop =0;loop<n;loop++)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        vector <int>::iterator it,it2;
        int arr[q+1];
        for(int s=0;s<q;s++)
        {
            cin>>arr[s];
        }
        cout<<"CASE# "<<t<<":\n";
        for(int s=0;s<q;s++)
        {
            it = lower_bound(v.begin(),v.end(),arr[s]);
            if(*it == arr[s])
                cout<<arr[s]<<" found at "<<(it-v.begin())+1<<endl;
            else
                cout<<arr[s]<<" not found"<<endl;
        }
        t++;
    }
    return 0;
}