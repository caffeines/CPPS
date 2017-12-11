#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    while(cin>>i>>j>>k)
    {
        if(i==0 && j==0 && k==0) break;
        if(i*i + j*j==k*k || i*i+k*k==j*j || k*k+j*j==i*i)
            cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }
    return 0;
}