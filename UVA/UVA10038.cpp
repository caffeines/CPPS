#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        bool flag = true;
        int a[n],x[n-1];

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            x[i] =abs(a[i+1] - a[i]);

        for(int i=0;i<n-1;i++)
        {
            for(int k=i+1;k<n;k++)
            {
                if(x[i]==x[k] || x[i]>n-1)
                {
                    flag = false;
                    break;
                }
            }
        }
        flag==true?
            cout<<"Jolly"<<endl:
            cout<<"Not jolly"<<endl;

    }
    return 0;
}


