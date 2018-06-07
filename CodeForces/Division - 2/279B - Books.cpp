#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int sum=0,cnt=0,CNT=0;
    int l=0,r=0;
    while(l < n)
    {
        while(r < n && sum+a[r] <= t)
        {
            sum += a[r];
            r++;
            cnt++;
        }
        CNT = max(cnt,CNT);
        cnt--;
        sum -= a[l];
        l++;
    }
    cout<<CNT<<endl;

    return 0;
}


