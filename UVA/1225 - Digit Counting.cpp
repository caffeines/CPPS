#include <bits/stdc++.h>
using namespace std;
map <int,int> mp;
map <int,int>::iterator it;
int digitCount(int n)
{
    while(n)
    {
        int temp = n%10;
        n /=10;
        mp[temp]++;
    }
}
int main()
{
    int n,in;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        mp.clear();
        cin>>in;
        for(int j=1;j<=in;j++)
            digitCount(j);

        for(int k=0;k<=9;k++)
        {
            if(k != 9)
                cout<<mp[k]<<" ";
            else
                cout<<mp[k]<<endl;
        }
    }
}