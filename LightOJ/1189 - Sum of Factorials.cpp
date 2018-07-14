#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    unsigned long long fact[25];
    fact[0] = 1;
    for(int i = 1;i<=20;i++){
        fact[i] = fact[i-1]*i;
    }

    ll t,n;
    scanf("%lld",&t);
    for( int kase = 1; kase<=t; kase++){
        scanf("%lld",&n);
        printf("Case %d: ",kase);
        stack <int> st;

        int i = 20;
        while( i >=0 ){
            if(n >= fact[i]){
                n -= fact[i];
                st.push(i);
            }
            i--;
        }

        if(n==0){
            while(st.size() !=1){
                printf("%d!+",st.top());
                st.pop();
            }
            printf("%d!\n",st.top());
            st.pop();
        }
        else
            printf("impossible\n");
    }

    return 0;
}


