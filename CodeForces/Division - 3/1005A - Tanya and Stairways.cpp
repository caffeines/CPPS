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

    int n;
    while(cin>>n){

        int a[n],ans = 0;
        vector <int> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=1;i<n;i++){
            if(a[i] <= a[i-1]){
                v.push_back(a[i-1]);
            }
        }
        v.push_back(a[n-1]);

        cout<<v.size()<<endl;
        for(int i = 0; i< v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}


