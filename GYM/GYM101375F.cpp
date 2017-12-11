#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double res =0;
    cin >> n;

    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        res += m;
    }
    res = ceil(res/5.0);

    printf("%0.0lf", res);
   return 0;
}

