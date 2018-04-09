#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int i,j,sum,x,y;
    while(cin>>i>>j)
    {
        x = i;y = j;
        if(i>j) swap(i,j);
        int MAX = 0;
        while(i<=j)
        {
            sum = 1;
            int n = i;
            while(n!=1)
            {
                ++sum;
                if(n%2!=0)
                    n = 3*n+1;
                else n = n/2;
            }
            MAX = max(MAX,sum);
            i++;
        }
        cout<<x<<" "<<y<<" "<<MAX<<endl;
    }



    return 0;
}

