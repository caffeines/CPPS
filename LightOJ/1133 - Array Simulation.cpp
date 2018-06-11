#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,T,input;
    char x;
    int y,z;
    cin>>T;
    for(int i =0;i<T;i++)
    {
        cin>>n>>m;
        vector <int>a;
        for(int k=0;k<n;k++)
        {
            cin>>input;
            a.push_back(input);
        }

        for(int q=0;q<m;q++)
        {
            cin>>x;
            if(x=='S')
                {
                    cin>>z;
                    for(int l=0;l<n;l++)
                    {
                        a[l] +=z;
                    }
                }
            else if(x=='R')
            {
                reverse(a.begin(),a.end());
            }
            else if(x=='P')
            {
                cin>>y>>z;
                swap(a[y],a[z]);
            }
            else if(x=='D')
            {
                cin>>z;
                for(int l=0;l<n;l++)
                {
                    a[l] = a[l]/z;
                }
            }
            else if(x=='M')
            {
                cin>>z;
                for(int l=0;l<n;l++)
                {
                    a[l] = a[l]*z;
                }
            }
        }
        cout<<"Case "<<i+1<<":"<<endl;
        for(int it = 0;it<n;it++)
        {
            cout<<a[it];
            if(it == (n-1))break;
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;

}
