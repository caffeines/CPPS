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

    int L,D,R,U, L1,D1,R1,U1, L2,D2,R2,U2,tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        if(i>1) cout<<endl;

        cin>>L1>>D1>>R1>>U1;
        cin>>L2>>D2>>R2>>U2;

        L = max(L2,L1);
        D = max(D2,D1);
        R = min(R2,R1);
        U = min(U2,U1);

        if(L < R && D < U)
            cout<<L<<" "<<D<<" "<<R<<" "<<U<<endl;

        else
            cout<<"No Overlap"<<endl;

    }


    return 0;
}


