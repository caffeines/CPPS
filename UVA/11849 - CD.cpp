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

    int n,m,x;
    while(cin>>n>>m && n && m){
        map <int , int> _map;
        _map.clear();
        while(n--){
            cin>>x;
            _map[x]++;
        }
        while(m--){
            cin>>x;
            _map[x]++;
        }
        map<int , int>::iterator it;
        int cnt = 0;
        for(it = _map.begin();it != _map.end();it++){
            if(it->second == 2)
                cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}


