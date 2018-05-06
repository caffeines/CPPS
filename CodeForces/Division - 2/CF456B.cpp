#include <bits/stdc++.h>
#define ll long long
#define N 1000099
using namespace std;

int main()
{
    string a;
    cin>>a;
    int q = 0;
    if (a.size() == 1)
    {
        q = a[0] - '0';
    }
    else
    {
        q = (a[a.size() - 2] - '0') * 10 + (a[a.size() - 1] - '0');
    }

    if (q % 4 == 0) {
        puts ("4");
    } else {
        puts ("0");
    }
    return 0;
}

