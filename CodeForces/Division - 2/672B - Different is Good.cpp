#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int n, cnt = 0;
    string s;
    cin>>n>>s;

    if( s.size() > 26 ) {
        cout<<"-1"<<endl;
        return 0;
    }

    map < char, int> mp;
    map < char, int>::iterator it;
    for(int i = 0; i<s.size(); i++ ) {
        mp[s[i]]++;
    }

    for( it = mp.begin(); it != mp.end(); it++ ) {
        cnt += (it->second -1);
    }
    cout<<cnt<<endl;

    return 0;
}


