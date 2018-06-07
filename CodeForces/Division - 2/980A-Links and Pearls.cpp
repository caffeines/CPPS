#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef caffeines
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    string s;
    while(cin>>s)
    {
        int links=0,perl=0;
        bool flag = false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='-')
                links++;
            else perl++;
        }
        if(links <=1 || links ==s.size() || links%perl==0)
                cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
