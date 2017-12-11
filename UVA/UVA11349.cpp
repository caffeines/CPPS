#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define kase(i,b) for(int i=1;i<=b;i++)
int main()
{
    ll T,n,mat[101][101];
    char str[3];
    cin>>T;
    kase(q,T)
    {
        bool flag = true;
        scanf("%s %s %d", str, str, &n);
        for(int i =0;i<n;i++)
        {
            for(int k =0;k<n;k++)
            {
                cin>>mat[i][k];
                if(mat[i][k]<0)
                    flag = false;
            }
        }
        for(int i =0;i<n;i++)
        {
            for(int k =0;k<n;k++)
            {
                if(mat[i][k] != mat[n-i-1][n-k-1])
                {
                    flag = false;
                    break;
                }
            }

        }
        flag == true?
            cout<<"Test #"<<q<<": Symmetric."<<endl:
            cout<<"Test #"<<q<<": Non-symmetric."<<endl;
    }
    return 0;
}


