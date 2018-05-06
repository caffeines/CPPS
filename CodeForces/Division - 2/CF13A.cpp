#include <bits/stdc++.h>
using namespace std;
int LCM(int a,int b)
{
    int g = __gcd(a,b);
    return (a/g)*b;
}
int calculate(int x,int i)
{
    int digit = 0;
    while(x)
    {
        digit += x%i;
        x /= i;
    }
    return digit;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        long long totalDigit = 0;
        for(int i=2;i<n;i++)
            totalDigit += calculate(n,i);
        int lcm = LCM(totalDigit,n-2);
        totalDigit = lcm/totalDigit;
        int cnt = lcm / (n-2);
        cout<<cnt<<"/"<<totalDigit<<endl;
    }
    return 0;
}
