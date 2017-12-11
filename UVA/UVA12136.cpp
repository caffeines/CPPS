#include <bits/stdc++.h>
using namespace std;
#define KASE(a) printf("Case %d: ",a);
#define ll long long
int convertTominute(string str)
{
    int hr = (str[0]-'0')*10+(str[1]-'0');
    int mn = (str[3]-'0')*10+(str[4]-'0');

    return ((hr*60)+mn);

}
int main()
{
    int T;
    cin>>T;
    for(int kase=1;kase<=T;kase++)
    {
        string WST,WET,MST,MET;
        bool flag = false;
        cin>>WST>>WET;
        cin>>MST>>MET;
        int wst = convertTominute(WST);
        int wet = convertTominute(WET);
        int mst = convertTominute(MST);
        int met = convertTominute(MET);
        
        if(wst>wet) swap(wst,wet);

        KASE(kase);
        if (wst<=mst && wet>=mst) flag = true;
        if (wst<=met && wet>=met) flag = true;
        if (wet>=mst && wet<=met) flag = true;
        if (wst>=mst && wst<=met) flag = true;

        if(flag)
            printf("Mrs Meeting\n");
        else
            printf("Hits Meeting\n");
    }
    return 0;
}


