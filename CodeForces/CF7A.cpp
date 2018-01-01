#include <bits/stdc++.h>
#define ll long long
#define N 10000010
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    string s;
    int res=0,row=0;
    for(int k=0;k<8;k++)
    {
        cin>>s;
        int col = 0;
        for(int i=0;i<8;i++)
            if(s[i]=='B') col++;
        if(col==8)
            row++;
        else
            res=col;
    }
    cout<<res+row<<endl;
    return 0;
}

