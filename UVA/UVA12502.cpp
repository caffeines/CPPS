#include<bits/stdc++.h>
using namespace std;
int main()
{
    double Dollar,A,B,get,temp;
    int T;
    cin>>T;

    for(int i=1;i<=T;i++)
    {
        cin>>A>>B>>Dollar;
        temp = (A-B);
        get = Dollar*(A+temp)/(A+B);
        cout<<floor(get)<<endl;
    }
    return 0;

}
