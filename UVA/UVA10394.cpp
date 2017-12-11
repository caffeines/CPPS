#include <bits/stdc++.h>
using namespace std;
const int size = 100000002;
pair <int,int> twin[size];
vector <int> Prime;
bool marked[size];
int c=0,l=0;
bool isPrime(int n)
{
    if(n<2) return false;
    else if(n==2) return true;
    else return marked[n];
}

void Seive()
{

    for(int i=0;i<=size;i++)
    {
        marked[i] = true;
    }

    for(int i=2;i<=size;i++)
    {

        if(marked[i] == true)
        {
            Prime.push_back(i);
            for(int k = 2;k*i<=size;k++)
                marked[k*i] = false;
        }
    }
}

void Twin()
{
    int q=0;
    for(int i=0;i<=Prime.size();i++)
    {
        int res = Prime[i+1]-Prime[i];
        if(isPrime(res)==true)
        {
            twin[q].first = Prime[i];
            twin[q].second = Prime[i+1];
            q++;
        }
    }
}
int main()
{
    int n,m;
    Seive();
    Twin();
    while(cin>>n)
    {
        cout<<"("<<twin[n-1].first<<", "<<twin[n-1].second<<")"<<endl;
    }
    return 0;
}
