#include <bits/stdc++.h>
#define ll long long
#define N 10000010
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    string sml = "hello";
    string str,res;
    int q=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == sml[q])
        {
            res+=str[i];
            q++;
        }
    }
    if(res=="hello")
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

