#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool Left[111],Right[111];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for(int kase = 1;kase <= t;kase++){

        memset(Left,false,sizeof(Left));
        memset(Right,false,sizeof(Right));

        int n,leftWeight = 0,rightWeight = 0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){

            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);

            if(!Left[a] && !Right[b]){
                Left[a] = Right[b] = true;
                leftWeight += c;
            }
            else{
                Right[a] = Left[b] = true;
                rightWeight += c;
            }
        }
        printf("Case %d: %d\n",kase,min(leftWeight,rightWeight) );
    }
    return 0;
}


