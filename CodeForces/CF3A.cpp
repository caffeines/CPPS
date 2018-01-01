#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    char x1,x2;
    int y1,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        int res = max(abs(x1-x2),abs(y1-y2));
        cout<<res<<endl;
        for(int i=1;i<=res;i++)
        {
            if(x1-x2>0)
            {
                cout<<"L";
                x1--;
            }
            if(x1-x2<0)
            {
                cout<<"R";
                x1++;
            }
            if(y1-y2>0)
            {
                cout<<"D";
                y1--;
            }
            if(y1-y2<0)
            {
                cout<<"U";
                y1++;
            }
            cout<<endl;
        }
    }
    return 0;
}
