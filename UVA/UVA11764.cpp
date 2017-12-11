#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T,N;
    cin>>T;
    for(int kase=1;kase<=T;kase++)
    {
        int temp=-1,low=0,up=0,num;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>num;
            if(temp != -1)
            {
                if(temp > num)low++;
                else if(temp<num)up++;
                temp = num;
            }
            temp = num;
        }
        cout<<"Case "<<kase<<": "<<up<<" "<<low<<endl;
    }

    return 0;
}

