/* Created by caffeines on 12/8/18 at 3:07 PM */
# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long LL;

int nextInt() {
    int n;
    scanf("%d", &n);
    return n;
}

void print(int n) {
    printf("%d\n", n);
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
int a[100005];

bool check(int x, int y) { return (x % y == 0); }

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    int n, m, l, k, d;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++) {
        if (check(i, n)) {
            a[i] = 1;
            continue;
        }
        if (check(i, m)) {
            a[i] = 1;
            continue;
        }
        if (check(i, l)) {
            a[i] = 1;
            continue;
        }
        if (check(i, k)) {
            a[i] = 1;
            continue;
        }
    }
    int cnt = 0;
    for (int j = 1; j <= d; ++j) {
        if (a[j]) cnt++;
    }
    print(cnt);
    return 0;
}

