#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SIZE 1000006
double LOG[SIZE];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int tc,n,b;
    cin>>tc;

    for(int i=1;i<SIZE;i++)
        LOG[i] = LOG[i-1] + log10(i);

    for(int t=1; t<=tc; t++){
        cin >>n >>b ;
        ll res = (LOG[n]/log10(b) ) +1;
        cout<<"Case "<<t<<": "<<res<<endl;
    }

    return 0;
}



