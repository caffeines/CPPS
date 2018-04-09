#include <bits/stdc++.h>
#define N 100001
#define sf(n) scanf("%d",&n)
using namespace std;
int arr[N];
int tree[N*4];
void init(int curr,int start,int end)
{
    if(start > end) return;
    if(end == start)
    {
        tree[curr] = arr[end];
        return;
    }
    int left = curr*2;
    int right = (curr*2)+1;
    int mid = (start+end)/2;
    init(left,start,mid);
    init(right,mid+1,end);
    tree[curr] = min(tree[left],tree[right]);
}

int query(int curr,int start,int end,int first,int last)
{
    if(first>end || last<start)
        return 1e9;
    if(start>=first && end<=last)
        return tree[curr];

    int left = curr*2;
    int right = (curr*2)+1;
    int mid = (start+end)/2;
    int q1 = query(left,start,mid,first,last);
    int q2 = query(right,mid+1,end,first,last);
    return (min(q1,q2));
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n,q,T,p,pos,val;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        scanf("%d %d",&n, &q);
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        init(1,1,n);

        printf("Case %d:\n",t);
        while(q--)
        {
            int i,j;
            scanf("%d%d",&i,&j);
            int Q = query(1,1,n,i,j);
            printf("%d\n",Q);
        }
    }
    return 0;
}
