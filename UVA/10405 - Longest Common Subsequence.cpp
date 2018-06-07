#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1010

string a,b;
int DP[MAX][MAX],lenA,lenB;

int LCS(int i, int j){

    if(a[i]=='\0' || b[j]=='\0') return 0;
    if(DP[i][j] != -1) return DP[i][j];

    if(a[i] == b[j])
        DP[i][j] = 1 + LCS(i+1,j+1);
    else{
        int val1 = LCS(i+1,j);
        int val2 = LCS(i,j+1);
        int ans = max(val1,val2);
        DP[i][j] = ans;
    }
    return DP[i][j];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    while(getline(cin,a)){
        getline(cin,b);
        memset(DP,-1,sizeof(DP));
        cout<<LCS(0,0)<<endl;
    }

    return 0;
}


