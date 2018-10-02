#include <bits/stdc++.h>
using namespace std;

#define MAXC 55
int dp[MAXC][MAXC][MAXC];
char s1[MAXC], s2[MAXC], s3[MAXC];

int calcLCS(int i,int j, int k)
{
	if(s1[i]=='\0' || s2[j]=='\0' || s3[k] == '\0')
        return 0;

	if(dp[i][j][k] != -1 )
        return dp[i][j][k];

	int ans = 0;
	if( s1[i] == s2[j] && s1[i] == s3[k] )
        ans = 1 + calcLCS(i+1,j+1,k+1);
	else
	{
		int val1 = calcLCS(i+1, j, k);
		int val2 = calcLCS(i, j+1, k);
		int val3 = calcLCS(i, j, k+1);
		ans = max( max( val1, val2 ), val3);
	}
	dp[i][j][k] = ans;
	return dp[i][j][k];
}

int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for ( int kase = 1; kase <= t; kase++ ) {
        scanf("%s%s%s",s1,s2,s3);

        memset(dp, -1, sizeof(dp));
        printf("Case %d: %d\n",kase, calcLCS(0, 0, 0));

    }

    return 0;
}

