#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define gl(cin,str) getline(cin,str)
int gcd(int a,int b)
{
    return __gcd(a,b);
}
int main()
{
    int T,num[100];
    string str;
    char x[10];
    cin>>T;
    gl(cin,str);
    for(int t=0;t<T;t++)
    {
        gl(cin,str);
        int i=0,ans=0;
        stringstream ss(str);
        while(ss>>num[i])i++;
        for(int k=0;k<i;k++)
        {
            for(int l=k+1;l<i;l++)
            {
                ans = max(ans,(gcd(num[k],num[l])));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
