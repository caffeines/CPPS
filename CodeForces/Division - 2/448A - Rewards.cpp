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

    int a1, a2, a3;
    cin>>a1>>a2>>a3;
    int b1, b2, b3;
    cin>>b1>>b2>>b3;

    int all_medal = b1 + b2 + b3;
    int all_cup = a1 + a2 + a3;

    double n;
    cin >> n;

    double cup = ceil( all_cup/5.0 );
    double medal = ceil( all_medal / 10.0);

    cout<<( cup + medal <= n? "YES" : "NO" )<<endl;

    return 0;
}


