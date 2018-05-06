#include <bits/stdc++.h>
using namespace std;
int matrix[5][5];
int main()
{
    int x,y,move,move1,move2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j] == 1)
            {
                x = i;
                y =j;
            }
        }
    }
    if(x == 2 && y == 2) cout<<"0"<<endl;
    else
    {

        move = abs(x-2);
        move += abs(y-2);
        cout<<move<<endl;
    }
    return 0;

}
