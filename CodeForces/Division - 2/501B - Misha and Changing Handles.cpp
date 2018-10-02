#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000010

map < string, int > _map;
int parent[N], flag[N];

void makeSet()
{
    for(int i=1;i<N;i++)
        parent[i] = i;
}

int setFind(int val)
{
    if(parent[val] == val)
        return val;

    parent[val] = setFind(parent[val]);

    return parent[val];
}

void SetUnion(int a, int b)
{
    int repA = setFind(a);
    int repB = setFind(b);

    if(repA != repB)
        parent[repB] = repA;
}

map< int, string > Get;
int x = 1;
int setter(string str){
    if( _map[str] == 0 ){
        _map[str] = x;
        Get[x] = str;
        x++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    string New, old;
    int q, temp;
    makeSet();
    cin>>q;
    temp = q;
    while(temp--){
        cin>>old>>New;
        setter(old);
        setter(New);
        //cout<<_map[old]<< " "<<_map[New]<<endl;
        SetUnion( _map[New],_map[old] );
    }

//    for (int p = 1; p < 10; p++ ){
//        cout<<parent[p]<<" ";
//    }
//    cout<<endl;
//    for (int p = 1; p < 10; p++ ){
//        cout<<p<<" ";
//    }
//        cout<<endl;

    int counter = 0;
    for( int i = 1; i < x; i++ ){
        if(i == parent[i]){
            counter++;
        }
    }
    cout<<counter<<endl;
    for( int i = 1; i < x; i++ ){
        if(i == parent[i]){
            continue;
        } else {
            int ss = setFind(i);
            if( !flag[i] && !flag[ss]){
                cout<<Get[i]<<" "<<Get[ss]<<endl;
                flag[i] = flag[ss] = 1;
            }
        }
    }

    return 0;
}


