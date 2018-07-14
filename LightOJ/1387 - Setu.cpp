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

    int t,n;
    cin>>t;
    for(int c= 1; c<=t;c++){
        cin>>n;
        int sum = 0,taka;
        string x;
        cout<<"Case "<<c<<":\n";
        while(n--){
            cin>>x;
            if(x=="donate"){
                cin>>taka;
                sum += taka;
            }
            else
                cout<<sum<<endl;
        }
    }

    return 0;
}


