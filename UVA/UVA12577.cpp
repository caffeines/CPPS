#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string input;
    int kase=1;
    while(getline(cin,input))
    {
        if(input == "*") break;
        cout<<"Case "<<kase<<": ";
        kase++;
        if(input == "Hajj")
            cout<<"Hajj-e-Akbar"<<endl;
        else if(input == "Umrah")
            cout<<"Hajj-e-Asghar"<<endl;
    }

    return 0;
}

