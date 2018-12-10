/* Created by caffeines on 12/7/18 at 1:46 PM */
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

bool isPrime(int n) {
    for (int j = 2; j < n; j++) {
        if (n % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    if (forthright48) {
        //freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    int n = nextInt();
    int m = nextInt();
    bool flag = false;
    for (int i = n+1; i <= m; i++) {
        if (isPrime(i)) {
            if(i == m) flag = true;
            else {
                flag = false;
                break;
            }
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}

