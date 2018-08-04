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

    int n, m, a, b, price, tarrif;
    cin>>n>>m>>a>>b;
    if( m * a < b ){
        price = a;
        tarrif = 1;

    } else {
        price = b;
        tarrif = m;
    }
    int total = floor( n / tarrif) * price;
    total += (n % tarrif)  * a;
    cout<< min( total,( n/m + 1) * b ) <<endl;
    return 0;
}


