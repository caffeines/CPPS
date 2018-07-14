#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    int t;
    scanf("%d",&t);
    getchar();
    for(int kase=1;kase<=t;kase++){
        string given1,given2,str1,str2;

        getline(cin,given1);
        getline(cin,given2);

        for(int i=0;i<given1.size();i++){
            if(isalpha(given1[i])){
                str1 += tolower(given1[i]);
            }
        }

        for(int i=0;i<given2.size();i++){
            if(isalpha(given2[i])){
                str2 += tolower(given2[i]);
            }
        }

        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());

        printf("Case %d: ",kase);
        if(str1==str2)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}

