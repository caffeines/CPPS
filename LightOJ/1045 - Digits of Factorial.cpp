#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SIZE 1000006
double LOG[SIZE];

int main()
{
    int tc,n,b;
    scanf("%d",&tc);

    for(int i=1;i<SIZE;i++)
        LOG[i] = LOG[i-1] + log10(i);

    for(int t=1; t<=tc; t++){
        scanf("%d %d",&n,&b);
        ll res = (LOG[n]/log10(b) ) +1;
        printf("Case %d: %d\n",t,res);
    }

    return 0;
}

