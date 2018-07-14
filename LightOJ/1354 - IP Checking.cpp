#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int binary2int(ll num) {
	ll bin = num, dec = 0, rem, base = 1;
	while (num > 0) {
		rem = num % 10;
		dec = dec + rem * base;
		base = base * 2;
		num = num / 10;
	}
	return dec;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    ll t,a,b,c,d,u,v,w,x;
    char ch;

    cin>>t;
    for(int kase = 1; kase<=t;kase++){
        int cnt = 0;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        cin>>u>>ch>>v>>ch>>w>>ch>>x;

        if(a==binary2int(u)) cnt++;
        if(b==binary2int(v)) cnt++;
        if(c==binary2int(w)) cnt++;
        if(d==binary2int(x)) cnt++;

        cout<<"Case "<<kase<<": ";
        if(cnt==4) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

    return 0;
}


