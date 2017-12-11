#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,j,result;
    while(cin>>i>>j)
    {
        if(i==0 && j==0) break;
        int temp_x = (int)sqrt(i);
        int temp_y = (int)sqrt(j);

        double x = sqrt(i);
        if(x==temp_x)
        {
            result = (temp_y - temp_x)+1;
        }
        else result = (temp_y - temp_x);
        cout<<result<<endl;
    }
    return 0;
}

