//1080B
# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long ll;
# define N (int)10e2


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
        //freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int q;
    while (scanf("%d", &q) != EOF) {
        for (int j = 0, l, r; j < q; ++j) {
            double res;
            scanf("%d %d", &l, &r);
            if (r % 2 == 0 && l % 2 == 1) {
                res = ceil((r - l) / 2.0);
            } else if (r % 2 == 1 && l % 2 == 0) {
                res = -1 * ceil((r - l) / 2.0);
            } else if (r % 2 == 0 && l % 2 == 0) {
                res = ceil((l + r) / 2.0);
            } else if (r % 2 == 1 && l % 2 == 1) {
                res = -1 * ceil((l + r) / 2.0);
            }
            printf("%d\n", int(res));
        }
    }

    return 0;
}
