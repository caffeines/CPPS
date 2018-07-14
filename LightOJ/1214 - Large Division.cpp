#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(string a, int b){
    ll rem = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] == '-')
            continue;
        rem = rem * 10 +(a[i]-'0');
        rem = rem % b;
    }
    return rem;
}

int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for(int kase = 1;kase <= t;kase++){
        ll b;
        string a;
        cin>>a>>b;
        ll res = solve(a,b);
        //cout<<res<<endl;
        cout<<"Case "<<kase<<": "<<(res? "not divisible":"divisible")<<endl;

    }
    return 0;
}

