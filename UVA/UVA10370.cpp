#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,x,N;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int cnt = 0;
        int sum = 0;
        vector <int> v;
        cin>>N;
        for(int k=0;k<N;k++)
        {
            cin>>x;
            v.push_back(x);
            sum+= x;
        }
        double avg;
        avg = (double)sum/N;
        for(int k=0;k<N;k++)
        {
            if((int)avg < v[k])
                cnt++;
        }
        double result;
        result = ((double)cnt/N)*100.0;
        printf("%.3lf",result);
        cout<<"%"<<endl;
    }
    return 0;
}
