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

    int n;
    int k = 1, kk = 1, lvl = 0, i = 1 ;
    cin>>n;
    while ( kk <= n ) {
        lvl++;
        k += ++i;
        kk += k;
    }
    cout<<lvl<<endl;
    return 0;
}

