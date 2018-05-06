#include <bits/stdc++.h>
using namespace std;
int LCM(int a,int b)
{
    int g = __gcd(a,b);
    return (a/g)*b;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int y,w;
    while(scanf("%d %d",&y,&w)!=EOF)
    {
       int MAX = max(w,y);
       int rem = 7-MAX;
       int lcm = LCM(rem,6);
       rem = lcm/rem;
       int h = lcm/6;

       cout<<h<<"/"<<rem<<endl;
    }
}
