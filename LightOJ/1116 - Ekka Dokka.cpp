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

    ll t,w;
    cin >>t;
    for(int kase = 1; kase <= t;kase++){
        ll even = 1;
        cin>>w;
        cout<<"Case "<<kase<<": ";
        if(w % 2){
            cout<<"Impossible"<<endl;
            continue;
        }
        else{
            while(w%2==0){
                w /= 2;
                even = even*2;
            }
            cout<<w<<" "<<even<<endl;
        }
    }

    return 0;
}


