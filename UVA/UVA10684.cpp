#include <bits/stdc++.h>
using namespace std;
#define pl printf("\n");
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(cin>>n && n)
    {
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int MAX=-2544,CumulativeSum=0;
        for(int i=0;i<n;i++)
        {
            CumulativeSum +=a[i];
            if(CumulativeSum>MAX)
                MAX = CumulativeSum;

            if(CumulativeSum<0)
                CumulativeSum = 0;

        }
        if(MAX>0)
            cout<<"The maximum winning streak is "<<MAX<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
    }

    return 0;
}

