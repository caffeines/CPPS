/* Created by caffeines on 12/4/18 at 10:21 PM */
# include <bits/stdc++.h>

using namespace std;
typedef long long LL;

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

LL fib(LL n) {
    long long fib[] = {2,0};
    int i = 0;
    long summed = 0;

    while (fib[i] < n) {
        summed += fib[i];
        i = (i + 1) % 2;
        fib[i] = 4 * fib[(i + 1) % 2] + fib[i];
    }
    return summed;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        cout << fib(n) << endl;
    }

    return 0;
}
