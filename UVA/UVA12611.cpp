#include <bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i=a;i<=b;i++)

int main()
{
    int T ,r;
    cin>>T;
    for(i,1,T)
    {
        cin>>r;
        int ULX = -(r*45)/20;
        int URX =  (r*55)/20;
        int ULY = -(r*30)/20;
        int URY = (r*30)/20;

        cout<<"Case "<<i<<":\n"<<ULX<<" "<<URY<<"\n"<<URX<<" "<<URY<<"\n"<<URX<<" "<<ULY<<"\n"<<ULX<<" "<<ULY<<"\n";
    }

    return 0;
}
