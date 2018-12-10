/* Created by caffeines on 12/8/18 at 8:28 PM */
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

int n, a[100];
int used[100];

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}


void backTrack(int idx) {
    if (idx == n) {
        if (!isPrime(a[n - 1] + 1)) return;
        cout << "1 ";
        for (int i = 1; i < n; i++){
            if(i < n-1)cout << a[i] << " ";
            else cout << a[i] <<endl;
        }
        return;
    }
    for (int i = 2; i <= n; ++i) {
        if (!used[i]) {
            if (isPrime(i + a[idx - 1])) {
                used[i] = 1;
                a[idx] = i;
                backTrack(idx + 1);
                used[i] = 0;
            }
        }
    }
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    int kas = 1;
    while (cin >> n) {
        if(kas > 1) cout << endl;
        cout << "Case " << kas++ << ":\n";
        a[0] = 1;
        backTrack(1);
        memset(a, 0, sizeof(a));
        memset(used, 0, sizeof(used));

    }
    return 0;
}

