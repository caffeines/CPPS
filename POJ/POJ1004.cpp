#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

    double m,sum=0;
    for(int i=0;i<12;i++)
    {
        cin>>m;
        sum = sum+m;
    }
    printf("$%.2lf\n",sum/12.0);
    return 0;
}
