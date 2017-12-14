#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 100000;
    int m;
    cin>>m;
    while(m--)
    {
        if(n<200000)
        {
            if(m)
                cout<<n++<<" ";
            else
                cout<<n<<endl;
        }
        else
            cout<<200001<<endl;
    }
    return 0;
}

