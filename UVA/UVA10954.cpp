#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    while(cin>>n && n)
    {
        priority_queue <int> pq;
        for(int i=0;i<n;i++)
        {
            int in;cin>>in;
            pq.push(-in);
        }
        int sum=0,temp=0;
        while(pq.size()>1)
        {
            sum = -pq.top();
            pq.pop();

            sum += -pq.top();
            pq.pop();

            temp += sum;
            pq.push(-sum);
        }
        cout<<temp<<endl;
    }
}
