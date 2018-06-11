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

    int n,k;
    while(cin>>n>>k){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int it=1;
        while(it<k){
            k -= it;
            it++;
        }
        cout<<a[k-1]<<endl;
    }

    return 0;
}


