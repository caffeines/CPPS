#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define sq(a) (a)*(a)
#define pl printf("\n");
#define pf(n) printf("%d",n)
#define sf(n) scanf("%d",&n)
#define sff(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define INF (numeric_limits<int>::max())
#define kase(i,b) for(int i=1;i<=b;i++)
#define asize(arr) (sizeof(arr)/sizeof(arr[0]))
#define mem(arr) memset(arr,0,sizeof(arr));
#define KASE(a) printf("Case %d: ",a);
#define gcd(x,y) __gcd(abs(x),abs(y))
#define lcm(x,y) ((abs(x)/gcd(x,y))*abs(y))
#define N 10000020
int main()
{
    int T;
    sf(T);
    getchar();
    kase(t,T)
    {
        stack <char> st;
        string str;
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            bool flag = true;
            if(st.empty()!=1)
            {
                if(st.top()=='(' && str[i] == ')')
                {
                    flag = false;
                    st.pop();
                }
                else if(st.top()=='[' && str[i] == ']')
                {
                    flag = false;
                    st.pop();
                }
                if(flag)
                    st.push(str[i]);
            }
            else
                st.push(str[i]);
        }
        if(st.size()==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
