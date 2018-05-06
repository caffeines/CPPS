#include <bits/stdc++.h>
#define ll long long
#define N 10000010
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int a[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3])
    {
        sort(a,a+4);
        int w=a[0], x=a[1], y=a[2],z=a[3];
        if(w+x>y || x+y>z)
            cout<<"TRIANGLE"<<endl;

        else if(x+w==y || x+y==z)
            cout<<"SEGMENT"<<endl;

        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
