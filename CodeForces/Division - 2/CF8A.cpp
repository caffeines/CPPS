#include <bits/stdc++.h>
#define ll long long
#define N 10000010
using namespace std;
bool check(string str,string a,string b)
{
    int pos = str.find(a);
    if(pos!=str.npos)
        return str.find(b,pos+a.size())!=str.npos;
    return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    string str,a,b;
    cin>>str>>a>>b;
    bool flag1 = check(str,a,b);
    reverse(str.begin(),str.end());
    bool flag2 = check(str,a,b);
    //cout<<flag1<<"  "<<flag2<<endl;
    if(flag1 && flag2)
        cout<<"both"<<endl;
    else if(flag1)
        cout<<"forward"<<endl;
    else if(flag2)
        cout<<"backward"<<endl;
    else
        cout<<"fantasy"<<endl;

    return 0;
}

