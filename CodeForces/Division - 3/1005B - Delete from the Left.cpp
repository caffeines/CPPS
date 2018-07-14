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

    string a,b;
    while(cin>>a>>b){
        int cnt = 0;
        if(a.size() < b.size())
            swap(a,b);
        for(int i=1; i <= a.size();i++)
        {
            if(a[a.size() - i] == b[b.size() - i])
                cnt++;
            else if(a[a.size() - i] != b[a.size() - i]) break;
            else if(i >= b.size()) break;
        }
        int res = (a.size() + b.size()) - 2*cnt;
        cout<<res<<endl;
    }
    return 0;
}


