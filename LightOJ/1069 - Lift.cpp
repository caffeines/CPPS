#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{

    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for(int kase = 1; kase<=t;kase++){
        int me,lift;
        scanf("%d %d",&me,&lift);
        int dist;
        if(me > lift){
            int temp = me - lift;
            dist = abs(0 - me) + temp;
        }
        else
            dist = abs(0-lift);
        int time = dist * 4;
        int total = 10 + 9 + time;

        printf("Case %d: %d\n",kase,total);
    }

    return 0;
}



