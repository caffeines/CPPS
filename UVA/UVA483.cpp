#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    string A[100000];
    while(gets(str))
    {
        int x=0;
        char *pch;
        pch = strtok (str," ");
        while (pch != NULL)
        {
            reverse(pch,pch+strlen(pch));
            A[x]=pch;
            pch = strtok (NULL, " ");
            if(pch!=NULL)
                A[x]+=" ";
            x++;
        }
        int i;
        for(i=0;i<x;i++)
        {
            cout<<A[i];
        }
        printf("\n");

    }
    return 0;
}
