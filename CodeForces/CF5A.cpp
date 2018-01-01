#include <bits/stdc++.h>
#define ll long long
#define N 10000010
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    int a=0,pos=0;
    while(getline(cin,s))
    {
        if(s[0]=='+') a++;
        else if(s[0]=='-') a--;
        else
            pos +=a*( s.size() - s.find(':',0)-1);
    }
    cout<<pos<<endl;
    return 0;
}

