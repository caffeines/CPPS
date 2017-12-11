#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char x[100];

    long a,b,res,afterD;
    int n,m=0;
    while(scanf("%s",x)==1)
    {

        n=strlen(x);
        sort(x,x+n);
        for(int i=0;i<n;i++)
        {
            if(x[i]!='0')
            {
                swap(x[0],x[i]);
                break;
            }
        }
        b = atol(x);
        sort(x,x+n);
        for (int i=0; i<n/2; i++)
            swap(x[i], x[n-i-1]);
        a = atol(x);

        if(a<b) swap(a,b);
        res = (a-b);
        afterD = res/9;
        cout<<a<<" - "<<b<<" = "<<res<<" = 9 "<<"* "<<afterD<<endl;
    }
    return 0;
}