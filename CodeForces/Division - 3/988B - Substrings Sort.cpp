#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif // caffeines

    int n;
    while(cin>>n)
    {
        vector< pair <int,string> > str;
        for(int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            str.push_back({s.size(),s});
        }
        sort(str.begin(),str.end());
        int cnt = 0;
        for(int i = 0; i < n-1; i++)
        {
            int pos;
            string s = str[n-1].second;
            pos = s.find(str[i].second,0);
            if(pos != -1)
                cnt++;
        }
        if(cnt==n-1)
        {
            cout<<"YES"<<endl;
            for(int i = 0; i < n; i++)
            {
                cout<<str[i].second<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}


