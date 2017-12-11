#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[2000];
    int x[] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    int n,cnt;
    while(cin>>n)
    {
        getchar();
        for(int i=1;i<=n;i++)
        {
            cnt = 0;
            gets(s);
            for(int k=0;s[k]!='\0';k++)
            {
                if(s[k] == ' ') cnt++;
                else
                {
                    cnt += x[s[k]-'a'];
                }
            }
            cout<<"Case #"<<i<<": "<<cnt<<endl;
        }

    }
    return 0;
}

