//
// Created by caffeines on 11/18/18.
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

int a[110];

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n, k;
    while (cin >> n >> k) {
        memset(a, 0, sizeof(a));
        int x[n + 5], m = -1;
        set<int> ms;
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
            ms.insert(x[i]);
            a[x[i]]++;
            m = max(m, a[x[i]]);
        }
        double M = ceil(m * 1.0 / k);
        //debug(M);
        int res = M * k * ms.size() - n;
        printf("%d\n", res);
    }
    return 0;
}
