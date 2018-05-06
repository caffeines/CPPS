#include <bits/stdc++.h>
using namespace std;
set <int> s;
int main()
{
    int n,x;
    while(cin>>n)
    {
        s.clear();
        int c = 0;
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>x;
            if(x)
                s.insert(x);
        }
        set<int>::iterator it;
        for(it = s.begin();it!=s.end();it++)
            c++;
        cout<<c<<endl;
    }

    return 0;
}
