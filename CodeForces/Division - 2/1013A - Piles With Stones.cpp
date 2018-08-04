#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int flag[1010];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int n, x, a = 0, b = 0;

    while( cin>>n ) {
        a = b = 0;
        for(int i = 0; i < n; i++ ) {
            cin>>x;
            a += x;
        }

        for(int i = 0; i < n; i++ ) {
            cin>>x;
            b += x;
        }


        if(a >= b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


