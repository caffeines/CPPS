#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k;
    while(cin>>n>>k)
    {
        int temp = n;
        int sum =0;
        while(n>=k)
        {
            int rem = n%k;
            n /= k;
            sum +=n;
            n+=rem;
        }
        cout<<sum+temp<<endl;
    }


    return 0;
}

