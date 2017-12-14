#include <bits/stdc++.h>
using namespace std;
map <char,int> mp;
int main()
{
    freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    while(T--)
    {
        int m = -1223;
        mp.clear();
        string s;
        int n;
        cin>>n;
        int temp = n;
        while(n--)
        {
            char ch;
            cin>>ch;
            mp[ch]++;
            m = max(mp[ch],m);
        }
        cout<<temp - m<<endl;
    }


    return 0;
}

