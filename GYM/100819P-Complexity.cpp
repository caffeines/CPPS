#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    string str;
    while(cin>>str){
        int a[27], sum=0;
        memset(a, 0, sizeof(a));
        for( int i = 0, x; i < str.size(); i++ ){
            x = str[i] - 'a';
            a[x]++;
        }

        sort(a, a+27);
        for( int i = 0; i < 27-2; i++ ) {
            sum += a[i];
        }
        cout<<sum<<endl;

    }
    return 0;
}


