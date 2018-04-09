#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mark[1000000], Prime[100000], x = 0;
void Sieve()
{
	for(int i = 3; i < 1000000; i += 2) {
		if(mark[i] == 0) {
			Prime[x++] = i;
			for(int j = 3; i*j < 1000000; j += 2)
				mark[i*j] = 1;
		}
	}
}
int main()
{
    int n;
    Sieve();
    while(cin>>n)
    {
        if(n==0) break;
        bool flag=false;
        for(int i=0;i<x;i++)
        {
            int s = Prime[i];
            int p = n-s;
            if(s>p) break;
            if(mark[s]==0 && mark[p]==0)
            {
                cout<<n<<" = "<<s<<" + "<<p<<'\n';
                flag = true;
                break;
            }
        }
        if(!flag)
            cout<<"Goldbach's conjecture is wrong."<<"\n";
    }
    return 0;
}
