#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T;
    cin>>T;
    for(int kase=1;kase<=T;kase++)
    {
        int age,dd,mm,yy,bd,bm,by;
        string s;
        getline(cin,s);
        char ch;
        cin>>dd>>ch>>mm>>ch>>yy;
        cin>>bd>>ch>>bm>>ch>>by;
        age = yy-by;
        if(bm>mm) age--;
        if(bm==mm && bd>dd) age--;
        //cout<<age<<endl;
        cout<<"Case #"<<kase<<": ";
        if(age>130)
            cout<<"Check birth date"<<endl;
        else if(age<0)
            cout<<"Invalid birth date"<<endl;
        else
            cout<<age<<endl;

    }

    return 0;
}

