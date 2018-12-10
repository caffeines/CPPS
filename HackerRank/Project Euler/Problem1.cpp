/* Created by caffeines on 12/3/18 at 1:50 PM */
# include <bits/stdc++.h>

using namespace std;
typedef long long int LL;

struct debugger {
    template<typename T>
    debugger &operator,(const T &v) {
        cerr << v << " ";
        return *this;
    }
} dbg;
# ifdef DEBUGMODE
# include <ctime>
clock_t tStart = clock();
# define debug(args...) {dbg,args; cerr<<endl;}
# define timeStamp debug ("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
# define bug printf("%d\n",__LINE__);
# else
# define debug(args...)  // Just strip off all debug tokens
# define timeStamp
# endif

LL target;
LL sumDiv(LL n){
    LL p = target / n;
    return n *((p * (p + 1)) / 2);
}

int main() {
    int T ;
    cin >> T;
    while (T--){
        cin >> target;
        target--;
        LL sum = 0;
        sum = sumDiv(3) + sumDiv(5) - sumDiv(15);
        cout<< sum<< endl;
    }
    return  0;
}

