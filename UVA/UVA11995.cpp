#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        priority_queue <int> pq;
        queue <int> q;
        stack <int> s;
        bool forQ,forPQ,forS,flag;
        forPQ = forQ = forS = flag = true;
        for(int i=0;i<n;i++)
        {
            int com,x;
            cin>>com>>x;
            {
                if(com == 1)
                {
                    pq.push(x);
                    q.push(x);
                    s.push(x);
                }
                else
                {
                    if(!pq.empty() && !q.empty() && !s.empty())
                    {
                        if(pq.top() == x && forPQ)
                        {
                            //cout<<"PQ\t"<<x<<"  "<<pq.top()<<endl;
                            pq.pop();
                        }
                        else
                            forPQ = false;

                        if(q.front() == x && forQ)
                        {
                            //cout<<"Q\t"<<x<<"  "<<q.front()<<endl;
                            q.pop();
                        }
                        else
                            forQ = false;

                        if(s.top() == x && forS)
                        {
                            //cout<<"S\t"<<x<<"  "<<s.top()<<endl;
                            s.pop();
                        }
                        else
                            forS = false;
                    }
                    else flag = false;
                }
            }
        }
        int counter = 0;
        if(forPQ) counter++;
        if(forQ)  counter++;
        if(forS)  counter++;
        if(counter > 1 && flag)
            cout<<"not sure"<<endl;
        else if(counter == 1 && flag)
        {
            if(forPQ) cout<<"priority queue"<<endl;
            else if(forQ) cout<<"queue"<<endl;
            else cout<<"stack"<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }

    return 0;
}

