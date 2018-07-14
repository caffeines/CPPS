#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int reverse(int n){
    int num=0;
    while(n){
        num = num*10 +(n % 10);
        n /= 10;
    }
    return num;
}

int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for (int kase = 1; kase <= t; kase++){
        int n,m;
        scanf("%d",&n);
        m = reverse(n);
        if(n==m)
            printf("Case %d: Yes\n",kase);
        else
            printf("Case %d: No\n",kase);
    }
    return 0;
}


