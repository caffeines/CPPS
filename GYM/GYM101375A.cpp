#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long ans = ((n * (n+1))/2)  - (n-1);
    cout << ans << endl;
}
