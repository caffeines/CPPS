#include <bits/stdc++.h>
using namespace std;
#define ll long long
int convert(string year,int mod)
{
    int temp=0;
    for(int i=0;i<year.length();i++)
    {
        temp = ((year[i]-'0')+(temp*10))%mod;
    }
    return temp;
}

bool leapYear(string year)
{
    if(convert(year,400)==0)
    {
        cout<<"This is leap year."<<endl;
        return true;
    }
    else if (convert(year,4)==0)
    {
        if (convert(year,100)==0)
            return false;
        else
        {
            cout<<"This is leap year."<<endl;
            return true;
        }
    }
    else return false;
}

int main()
{
    string year;
    int pr=0;
    while(getline(cin,year))
    {
        if(pr!=0)
            cout<<endl;
        pr++;
        bool leap = leapYear(year);
        bool hulukulu = false;

        if(convert(year,15)==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            hulukulu = true;
        }
        if(leap && convert(year,55)==0)
            cout<<"This is bulukulu festival year."<<endl;
        if(!leap && !hulukulu)
            cout<<"This is an ordinary year."<<endl;

    }

    return 0;
}
