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
    list <char> l;
    list <char>::iterator it;
    string str;
    while(getline(cin,str))
    {
        l.clear();
        it = l.begin();
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='[') it = l.begin();
            if(str[i]==']') it = l.end();
            if(str[i] !='[' && str[i] !=']')
                l.insert(it,str[i]);
        }
        for(it=l.begin();it!=l.end();it++)
            cout<<*it;
        cout<<endl;
    }
    return 0;
}



