#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[2000];
    char x[] = {'`','1','2','3','4','5','6','7','8','9','0','-','=',
                'Q','W','E','R','T','Y','U','I','O','P','[',']',
                'A','S','D','F','G','H','J','K','L',';',
                'Z','X','C','V','B','N','M',',','.','/'};
    bool flag = false;
    while(gets(s))
    {
        for(int i=0;s[i];i++)
        {
            int w = s[i];
            for(int k=0;k<45;k++)
            {
                if(x[k]==s[i])
                {
                    cout<<x[k-1];
                }

            }
            if(s[i]==' ')
                cout<<" ";
            else if(w==92)
                cout<<"]";
            else if (w==39)
                cout<<";";

        }
        cout<<endl;

    }
 return 0;
}


