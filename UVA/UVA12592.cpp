#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,T;

    while(cin>>n)
    {
        string s[n],s1;
        string p[n];
        getchar();
        for(int i=0;i<n;i++)
        {
            getline(cin,s[i]);
            getline(cin,p[i]);

        }
        cin>>T;
        getchar();
        for(int i=1;i<=T;i++)
        {
            getline(cin,s1);
            for(int k=0;k<n;k++)
            {
                if(s[k]==s1)
                {
                    cout<<p[k]<<endl;
                    break;
                }

            }
        }
    }

    return 0;
}


