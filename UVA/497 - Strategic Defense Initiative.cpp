#include <bits/stdc++.h>
using namespace std;
#define SZ 1010

int A[SZ], lis[SZ],pos[SZ], n, maxLIS;

int LIS(){
    int mid, lo, hi, newSet;
    maxLIS = -1;
    for ( int i = 0; i < n; i++ ){
        lo = 0, hi = maxLIS, newSet = -1 ;
        while ( lo <= hi ){
            mid = (lo + hi)/2;
            if( pos[mid] <= A[i] ){
                if( mid == maxLIS || pos[mid+1] > A[i] ){
                    newSet = mid + 1;
                    break;
                } else lo = mid + 1;
            } else hi = mid - 1;
        }

        if( newSet == -1 ) newSet = 0;
        pos[newSet] = A[i];
        lis[i] = newSet + 1;
        maxLIS = max( maxLIS, newSet );
    }
    maxLIS++;
    return maxLIS;
}

void printLIS() {
    int ans[SZ], temp = maxLIS, at = 0;
    for ( int i = n-1; i >= 0; i-- ) {
        if( lis[i] == temp ){
            temp--;
            ans[at++] = A[i];
        }
    }
    for( int i = at - 1; i >= 0; i-- ) {
        cout<<ans[i]<<endl;
    }

}


int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
	char str[100];
	scanf("%d", &t);
	getchar();
	getchar();
	while(t--) {
		n = 0;
		while(gets(str)) {
			if(str[0] == '\0')
				break;
			sscanf(str, "%d", &A[n]);
			n++;
		}

		printf("Max hits: %d\n", LIS());
		printLIS();
		if(t)
			puts("");
	}
    return 0;
}


