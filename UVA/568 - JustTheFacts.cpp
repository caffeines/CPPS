//
// Created by caffeines on 11/19/18.
//
# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long ll;


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

int res[10010], n = 10001;

void getRes() {
    ll f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
        while (f % 10 == 0) {
            f /= 10;
        }
        // debug(f);
        f = f % 100000;
        res[i] = f % 10;
    }
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    getRes();
    int in;
    while (scanf("%d", &in) != EOF) {
        printf("%5d -> %d\n", in, res[in]);
    }

    return 0;
}

