#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        int counter=0;
        for(int i = 1;i<x;i++)
        {
            int ruku = x-i;
            if(ruku%i==0)
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}

