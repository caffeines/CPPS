#include <bits/stdc++.h>
#define ll long long
using namespace std;
map <ll,string> mp;
ll make_unique(int a,int b)
{
    return a+(b*15415624);
}
int main()
{
    int n,t;
    while(cin>>n)
    {
        int c1,c2;
        string name;
        while(n--)
        {
            cin>>c1>>c2>>name;
            int mu = make_unique(c1,c2);
            mp[mu] = name;
        }
        map<ll,string>::iterator it;
        cin>>t;
        while(t--)
        {
            cin>>c1>>c2;
            int mu = make_unique(c1,c2);
            cout<<mp[mu]<<endl;

        }
    }
    return 0;
}
