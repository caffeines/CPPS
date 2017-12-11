#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int xR,yR,xW,yW;
    cin>>xR>>yR>>xW>>yW;

    double Rdis = sqrt((xR*xR)+(yR*yR));
    double Wdis = sqrt((xW*xW)+(yW*yW));

    if(Rdis<Wdis) cout << "Russo" << endl;
    else if(Rdis>Wdis)cout << "Wil" << endl;
    else cout << "Empate" << endl;

    return 0;
}
