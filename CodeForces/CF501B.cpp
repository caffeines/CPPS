#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string name1,name2;
    vector<pair<string,string> >v;
    int t,i;
    bool flag;
    cin>>t;
    for(int kase =1;kase<=t;kase++)
    {
        flag = false;
        cin>>name1>>name2;
        for(i=0;i<v.size();i++)
        {
            if(v[i].second == name1)
            {
                flag = true;
                break;
            }
        }
        if(flag)
            v[i].second = name2;
        else
            v.push_back(make_pair(name1,name2));
    }

    cout<<v.size()<<endl;
    for(int k=0;k<v.size();k++)
        cout<<v[k].first<<" "<<v[k].second<<endl;
    return 0;
}

