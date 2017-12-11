#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string first,second;
    int counter;
    while(cin>>first>>second)
    {
        counter =0;
        int pos = first.find(second,0);
        while(pos<first.size())
        {
            counter++;
            pos = first.find(second,pos+second.size());
        }
        cout<<counter<<endl;
    }

    return 0;
}

