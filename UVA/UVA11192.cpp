#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    char str[101];
    while(cin>>T)
    {
        if(T==0) break;
        scanf("%s",str);

        int sz = strlen(str)/T;
        for(int i=0;i<strlen(str);i+=sz)
        {
            for(int l=sz+i-1;l>=i;l--)
            {
                cout<<str[l];
            }
        }
        cout<<endl;
    }
    return 0;
}
