#include <iostream>
using namespace std;
int main()
{
    int x;
    int a[1000];
    cin>>a[0];
    while(a[0] != -1)
    {
        int c=0,n=1;
        while(1)
        {
            cin>>a[n];
            if(a[n]==0) break;
            n++;
        }
        for(int q=0;q<n-1;q++)
        {
            for(int m =q+1;m<n;m++)
            {
                if(a[q]*2 == a[m] || a[m]*2 == a[q])
                {
                    c++;
                }

            }
        }
        cout<<c<<endl;
        cin>>a[0];
    }
    return 0;
}

