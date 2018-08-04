#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;

int solve( int n, int g ) {
    int l = 1, cnt = 0, mid;
    while( n - l > 4 ) {
        mid = (l+n)/2;
        if( n == l )
            return cnt;
        if( n - l <= 1 ){
            cnt++;
            return cnt;
        }

        if( mid > g ) {
            n = mid - 1;
        }
        if( mid < g ){
            l = mid + 1;
        }
        cnt ++ ;
    }
    return cnt+1;
}

int main()
{
    int n, g;
    scanf("%d %d",&n,&g);
    printf("%d\n", solve( n, g ) );
    return 0;
}


