/* Created by caffeines on 11/28/18 at 11:15 PM. */

# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long LL;
const LL INF = 10e17;


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

LL nextInt() {
    LL n;
    cin >> n;
    return n;
}

void print(LL n) {
    cout << n << endl;
    return;
}

void solve() {
    int T;
    scanf("%d", &T);
    for (int kase = 1; kase <= T; kase++) {
        LL page = nextInt();
        LL start = nextInt();
        LL des = nextInt();
        LL d = nextInt();

        LL a, b, s1 = INF, s2 = INF, ans = INF;

        if ((abs(start - des)) % d == 0) {
            s1 = (abs(start - des)) / d;
            print(s1);
        } else {
            a = ceil((start - 1) / (d * 1.0));
            b = ceil((page - start) / (d * 1.0));

            if ((des - 1) % d == 0) s1 = a + (des - 1) / d;
            if ((page - des) % d == 0) s2 = b + (page - des) / d;
            ans = min(s1, s2);
            if (ans == INF) {
                print(-1);
            } else {
                print(ans);
            }
        }
    }
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    solve();

    return 0;
}
