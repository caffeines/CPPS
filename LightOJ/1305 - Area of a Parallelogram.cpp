#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    for(int kase = 1;kase <= t; kase++){
        int ax,ay,bx,by,cx,cy;

        cin>>ax>>ay>>bx>>by>>cx>>cy;
        int area = abs(ax * (by-cy) + bx * (cy - ay) + cx * (ay - by) );
        int dx = ax + cx - bx;
        int dy = ay + cy - by;

        cout<<"Case "<<kase<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }

    return 0;
}


