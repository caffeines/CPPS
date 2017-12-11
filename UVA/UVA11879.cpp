#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(cin>>n && n != "0")
    {
        int num = 0;
        for(int i=0;i<n.size();i++)
            num = (num*10 + n[i]-'0')%17;
        num==0? cout<<"1"<<endl:cout<<"0"<<endl;
    }
    return 0;
}

