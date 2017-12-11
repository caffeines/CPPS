#include <bits/stdc++.h>
using namespace std;
map <int,int> m;
map<int ,int>::iterator it;
int main()
{
    int num;
    vector <int> v;
    while(cin>>num)
    {
        it = m.find(num);
        if(it == m.end())
            v.push_back(num);
        m[num]++;
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "<<m[v[i]]<<endl;
    return 0;
}

