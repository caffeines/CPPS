#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    int n, k, n1;

    while( cin>>n >>k >>n1 ) {
        int t = (n + n1 - 1)/n1;
        if( t*t > k)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}


