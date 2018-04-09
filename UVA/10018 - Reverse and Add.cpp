#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define KASE(i,b) for(int i=1;i<=b;i++)
bool isPalindrome(string str)
{
    int n = str.size();
    bool flag = true;
    for(int i=0;i<=n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    ll l_num,lr_num;
    int T;
    string num;
    cin>>T;
    KASE(kase,T)
    {
        int counter=0;
        cin>>num;
        while(!isPalindrome(num))
        {
            string r_num = num;
            reverse(r_num.begin(),r_num.end());

            stringstream ssl(num);
            ssl>>l_num;

            stringstream ssr(r_num);
            ssr>>lr_num;
            ll sum = lr_num + l_num;
            stringstream ss;
            ss<<sum;
            num = ss.str();
            counter++;
        }
        cout<<counter<<" "<<num<<endl;
    }
    return 0;
}
