#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,x;
    cin>>T;
    vector <int> v2;
    cout<<"Lumberjacks:"<<endl;
    for(int i=1;i<=T;i++)
    {
        vector <int> v;
        for(int k=0;k<10;k++)
        {
            cin>>x;
            v.push_back(x);
        }
        v2 = v;
        sort(v2.begin(),v2.end());
        if(v[0]>v[1])
            reverse(v.begin(),v.end());
        if(v == v2)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;


    }
    return 0;
}
