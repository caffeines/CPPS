 #include <bits/stdc++.h>
 #define ll long long
 #define N 10000010
 using namespace std;

 int main()
 {
    //freopen("input.txt","r",stdin);
    int row,col;
    while(cin>>row>>col)
    {
        char a[row][col];
        int start_point1 = 1231214,start_point2=23823,end_point1=-1241,end_point2=-2443;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                {
                    start_point1 = min(start_point1,j);
                    start_point2 = min(start_point2,i);
                    end_point1 = max(end_point1,j);
                    end_point2 = max(end_point2,i);
                }
            }
        }
        for(int i=start_point2;i<end_point2+1;i++)
        {
            for(int j=start_point1;j<end_point1+1;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        //cout<<endl<<start_point2<<" "<<end_point2<<" "<<start_point1<<" "<<end_point1<<endl;
    }
    return 0;
 }

