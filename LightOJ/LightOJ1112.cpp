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
    tree[curr] = tree[left] + tree[right];
}

void update(int curr,int start, int end,int pos,int value)
{
    if(start>end || start>pos || end<pos)
        return;
    if(start==pos && end==pos)
    {
        tree[curr] = tree[curr] + value;
        return;
    }
    int left = curr*2;
    int right = (curr*2)+1;
    int mid = (start+end)/2;

    if(mid>=pos)
        update(left,start,mid,pos,value);
    else
        update(right,mid+1,end,pos,value);
    tree[curr] = tree[left]+tree[right];
}
int query(int curr,int start,int end,int first,int last)
{
    if(first>end || last<start)
        return 0;
    if(start>=first && end<=last)
        return tree[curr];

    int left = curr*2;
    int right = (curr*2)+1;
    int mid = (start+end)/2;

    int q1 = query(left,start,mid,first,last);
    int q2 = query(right,mid+1,end,first,last);
    return q1+q2;
}
int main()
{
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
            sf(p);
            if(p==1)
            {
                sf(pos);
                printf("%d\n",arr[pos+1]);
                update(1,1,n,pos+1,-arr[pos+1]);
                arr[pos+1] = 0;
            }
            if(p==2)
            {
                sf(pos);sf(val);
                arr[pos+1] += val;
                update(1,1,n,pos+1,val);
            }
            if(p==3)
            {
                sf(pos);sf(val);
                int Q = query(1,1,n,pos+1,val+1);
                printf("%d\n",Q);
            }
        }
        memset( tree , 0 , sizeof(tree) );

    }
    return 0;
}
