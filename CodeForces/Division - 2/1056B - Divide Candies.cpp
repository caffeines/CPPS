/* Created by caffeines on 11/29/18 at 5:18 PM */
# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef unsigned long long LL;

LL nextInt() {
    LL n;
    cin >> n;
    return n;
}

void print(LL n) {
    cout << n << endl;
    return;
}

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

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    LL n = nextInt();
    LL m = nextInt();
    LL res = 0;
    LL M = min(m, n);
    for (LL i = 1; i <= M; i++) {
        for (LL j = 1; j <= M; ++j) {
            LL temp = (i * i + j * j);
            if (temp % m) continue;
            LL s1 = (n - i) / m + 1;
            LL s2 = (n - j) / m + 1;
            res += (s1 * s2);
        }
    }
    print(res);

    return 0;
}

