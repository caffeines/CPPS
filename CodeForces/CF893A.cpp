#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,spect;
    bool win[3],flag;
    while(cin>>n)
    {
        flag = true;
        win[0] = win[1] = true;
        win[2] = false; spect=3;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(win[x-1])
            {
                win[spect-1] = true;
                spect = 6-(x+spect);//for first case alex,bob are player and carl is spector ==> 6-1+3 = 2
                win[spect-1] = false;// 2 means bob will be spector
            }
            else
                flag = false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
