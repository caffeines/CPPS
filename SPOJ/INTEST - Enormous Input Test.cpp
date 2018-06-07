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

    int n,k, cnt=0,x;
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        if(x%k==0)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}



