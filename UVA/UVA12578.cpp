#include<bits/stdc++.h>
#define PI ( 4. * atan(1.))
using namespace std;
int main()
{
    double length,wedth,redius;
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>length;
        wedth = (6.0/10)*length;
        redius = (2.0/10)*length;
        double redCircle = PI*redius*redius;
        double greenPortion = (length*wedth) - redCircle;

        printf("%.2lf %.2lf",redCircle,greenPortion);
        cout<<endl;
    }
    return 0;
}