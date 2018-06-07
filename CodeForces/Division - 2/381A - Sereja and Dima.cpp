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

    int n,serja = 0,dima = 0;
    cin>>n;

    int a[n], l = 0, r = n-1, itr = 0;
    for(int i = 0; i < n; i++) cin>>a[i];

    while(l<=r){
        if(a[l]>a[r]){
            if(itr%2==0){
                serja += a[l];
                l++;
            }
            else{
                dima += a[l];
                l++;
            }
        }

        else{
            if(itr%2==0){
                serja += a[r];
                r--;
            }
            else{
                dima += a[r];
                r--;
            }
        }
        itr++;
    }

    cout<<serja<<" "<<dima<<endl;

    return 0;
}


