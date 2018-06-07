#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int freq[10000];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int n,k;
    cin>>n>>k;
    int a[n+1];
    vector <int> res;

    memset(freq,-1,sizeof(freq));

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(freq[a[i]] == -1)
        {
            freq[a[i]] = 1;
            res.push_back(i);
        }
    }

    if(res.size()>=k)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
            cout<<res[i]<<" ";
    }
    else
        cout<<"NO"<<endl;
    return 0;
}


