#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define kase(i,b) for(int i=1;i<=b;i++)
int main()
{
    string data,data2;
    set <string> s;
    while(cin>>data)
    {
        data2.clear();
        int q=0;
        transform(data.begin(), data.end(), data.begin(), ::tolower);
        for(int i=0;i<data.size();i++)
        {
            if(data[i]>='a' && data[i] <='z')
                data2 += data[i];
            else
            {
                if(data2 != "")
                {
                    s.insert(data2);
                    data2.clear();
                }
            }
        }
        if(data2 != "")
            s.insert(data2);
    }

    set<string>::iterator it;
    for(it = s.begin();it!=s.end();it++)
        cout<<*it<<endl;
    return 0;
}
