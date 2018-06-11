#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines

    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        ll n; cin>>n;
        ll sqt = ceil(sqrt(n));
        ll rest = sqt * sqt - n;
        int x, y;

        if(sqt > rest){
            x = rest+1;
            y = sqt;
        }
        else{
            x = sqt;
            y = n - (sqt-1) * (sqt-1);
        }
        if(sqt%2==0)
        {
            swap(x,y);
        }
        cout<<"Case "<<t<<": "<<x<<" "<<y<<endl;

    }
    return 0;
}


