#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct figure{
    double x1,y1,x2,y2;
    char type;
}a[1001];

bool solve(double a, double b, double c, double d, double r){

    double dist = sqrt( ((c - a)*(c - a)) + ((d - b)*(d - b)) );
    return(dist < r);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // caffeines

    int i=0;
    while(cin>>a[i].type && a[i].type != '*'){
        if(a[i].type == 'r'){
            cin>>a[i].x1>>a[i].y1>>a[i].x2>>a[i].y2;
        }
        else
            cin>>a[i].x1>>a[i].y1>>a[i].x2;

        i++;
    }
    double gx,gy;
    int cnt = 1;
    while(cin>>gx>>gy){
        if(gx == 9999.9 && gy == 9999.9)
            break;

        bool flag = false;

        for(int j=0;j<i;j++){
            double A = a[j].x1;
            double B = a[j].y1;
            double C = a[j].x2;
            double D = a[j].y2;

            if(a[j].type == 'r'){
                if( (gx > A && gx < C) && (gy < B && gy > D) ){
                        cout<<"Point "<<cnt<<" is contained in figure "<<j+1<<endl;
                        flag = true;
                    }
                }

            else{
                if(solve(A,B,gx,gy,C)){
                    cout<<"Point "<<cnt<<" is contained in figure "<<j+1<<endl;
                    flag = true;
                }
            }

        }
        if(flag==false)
            cout<<"Point "<<cnt<<" is not contained in any figure"<<endl;
        cnt++;
    }
    return 0;
}


