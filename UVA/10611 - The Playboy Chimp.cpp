#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = (int) 10e9;
int l = -1, r = INF;
int a[50010];

int UpperBinarySearch( int lo, int hi, int key ) {

    while( lo < hi ){
        int mid = ( lo + hi ) / 2;
        if( l < a[mid] and key > a[mid] ){
            l = a[mid];
            lo = mid + 1;
        }
        else hi = mid;
    }
    return l;
}

int LowerBinarySearch( int lo, int hi, int key ) {
    while( lo < hi ){
        int mid = ( lo + hi ) / 2;
        if( r >= a[mid] and key < a[mid] ){
            r = a[mid];
            hi = mid;
        }
        else lo = mid+1;
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines

    int n;
    cin>>n;
    for(int i = 0; i < n; i++ ) {
        cin>>a[i];
    }
    int q ;
    cin>>q;
    for( int i = 0; i < q; i++ ) {
        int x;
        cin>>x;
        l = -1; r = INF;
        int up = UpperBinarySearch(0,n,x);
        int low = LowerBinarySearch(0,n,x);
        up == -1? cout<<"X " : cout<<up<<" ";
        low == INF? cout<<"X\n" : cout<<low<<endl;
    }

    return 0;
}


