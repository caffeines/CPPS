#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(string var)
{
    if(var == "purple")
        cout<<"Power"<<endl;
    else if(var == "green")
        cout<<"Time"<<endl;
    else if(var == "blue")
        cout<<"Space"<<endl;
    else if(var == "orange")
        cout<<"Soul"<<endl;
    else if(var == "red")
        cout<<"Reality"<<endl;
    else
        cout<<"Mind"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    int n;
    cin>>n;

    map<string,int> _map;
    map<string,int>::iterator it;
    string a[] = {"red","purple", "green", "blue", "orange", "yellow"};
    for(int i=0;i<6;i++)
        _map[a[i]]=1;
    while(n--)
    {
        string x;
        cin>>x;
        _map[x] = 0;
    }
    int cnt=0;
    for(it = _map.begin();it!=_map.end();it++)
    {
        if(it->second == 1)
           cnt++;
    }
    cout<<cnt<<endl;
    for(it = _map.begin();it!=_map.end();it++)
    {
        if(it->second == 1)
            print(it->first);
    }


    return 0;
}


