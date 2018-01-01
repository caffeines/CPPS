#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kase(i,b) for(int i=0;i<b;i++)
map <string,int> mp,tp;
int score[1005],T,MScore;
string name[1005];
int main()
{
    while(cin>>T)
    {
        mp.clear();tp.clear();
        kase(t,T)
        {
            cin>>name[t]>>score[t];
            mp[name[t]] += score[t];
        }
        kase(t,T)
            MScore = max(MScore,mp[name[t]]);
        int i;
        for(i=0;mp[name[i]]<MScore || (tp[name[i]]+=score[i])<MScore;i++);
            cout<<name[i]<<endl;
    }

    return 0;
}
