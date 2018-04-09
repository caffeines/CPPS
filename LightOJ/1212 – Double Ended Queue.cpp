#include <bits/stdc++.h>
using namespace std;
#define ll long long
deque <int> dq;
int main()
{
    int T,n,c,value;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        dq.clear();
        cout<<"Case "<<t<<":"<<endl;
        int length = 0;
        cin>>n>>c;
        string com;
        while(c--)
        {
            cin>>com;
            if(com=="pushLeft" || com=="pushRight")
            {
                cin>>value;
                if(length>=n)
                cout<<"The queue is full"<<endl;

                else
                {
                    if(com=="pushLeft")
                    {
                        dq.push_front(value);
                        cout<<"Pushed in left: "<<value<<endl;
                        length++;
                    }
                    if(com=="pushRight")
                    {
                        dq.push_back(value);
                        cout<<"Pushed in right: "<<value<<endl;
                        length++;
                    }
                }

            }

            if(com=="popLeft" || com=="popRight")
            {
                if(dq.size()==0)
                    cout<<"The queue is empty"<<endl;
                else
                {
                    if(com=="popLeft" && length!=0)
                    {
                        value = dq.front();
                        dq.pop_front();
                        cout<<"Popped from left: "<<value<<endl;
                        length--;
                    }

                    if(com=="popRight" && length!=0)
                    {
                        value = dq.back();
                        dq.pop_back();
                        cout<<"Popped from right: "<<value<<endl;
                        length--;
                    }
                }

            }
        }
    }
    return 0;
}
