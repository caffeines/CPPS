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
    while(cin>>n) {
        int a[n];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2)
                a[i] = x;
            else
                a[i] = x - 1;
        }
        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


