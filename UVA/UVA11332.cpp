#include<bits/stdc++.h>
using namespace std;
int sum=0;
int main()
{
    int T,temp;
    int x;
    cin>>x;
    while(x!=0)
    {
        int sum=0;
        while(x/10>0)
        {
            temp = x%10;
            x = x/10;
            sum += temp;
        }
        //cout<<"Sum1 : "<<sum<<endl;
        x+=sum;
        sum=0;
        while(x/10>0)
        {
            temp = x%10;
            x = x/10;
            sum += temp;
        }
        //cout<<"Sum2 : "<<sum<<endl;
        x+=sum;
        sum=0;
        while(x/10>0)
        {
            temp = x%10;
            x = x/10;
            sum += temp;
        }
        sum+=x;

        cout<<sum<<endl;
        cin>>x;
    }
    return 0;

}

