#include <bits/stdc++.h>
using namespace std;
const int size = 100002;
pair <int,int> twin[size];
vector <int> Prime;
bool mark[size];

void Sieve()
{

    for(int i=0;i<=size;i++)
    {
        mark[i] = true;
    }

    for(int i=2;i<=size;i++)
    {
        if(mark[i] == true)
        {
            Prime.push_back(i);
            for(int k = 2;k*i<=size;k++)
                mark[k*i] = false;
        }
    }
}

int main()
{
    int n;
    Sieve();
    while(cin>>n)
    {
        int counter=0;
        if(n==0) break;
        bool flag=false;
        for(int i=0;i<Prime.size();i++)
        {
            int s = Prime[i];
            int p = n-s;
            if(s>p) break;
            if(mark[s]==1 && mark[p]==1)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
