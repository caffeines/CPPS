#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        long long int a, b;
        cin >> a >> b;
        if((a==b) || (abs(a-b)==1))
            cout << "Ok" << endl;
        else
        {
            int res = (a+b)/2;
            int res1 = (a+b) - res;

            cout << res << " " << res1 << endl;
        }
    }


    return 0;
}
