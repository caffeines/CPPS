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
    vector <int> v;
    while( cin>>n ) {
        v.push_back(n);
        nth_element( v.begin(), v.begin() + v.size() / 2, v.end());
        int ans1 = v[v.size()/2];

        if( v.size() % 2 == 0 ) {
            nth_element( v.begin(), v.begin() + v.size() / 2 - 1, v.end() );
            int ans2 = v[v.size()/2 - 1];
            ans1 = (ans1 + ans2) / 2;
        }
        cout<<ans1<<endl;
    }
    return 0;
}


