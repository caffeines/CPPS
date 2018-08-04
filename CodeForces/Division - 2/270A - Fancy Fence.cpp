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

    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<( 360 % ( 180 - n ) == 0 ? "YES" : "NO" )<<endl;
    }

    return 0;
}


