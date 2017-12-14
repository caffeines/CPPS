#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll nom[3];
        for(int i=0;i<3;i++)
            cin>>nom[i];
        sort(nom,nom+3);
        if(nom[2] >= 2*(nom[0]+nom[1]))
            cout<<nom[0]+nom[1]<<endl;
        else
            cout<<(nom[0]+nom[1]+nom[2])/3<<endl;
    }
    return 0;
}

