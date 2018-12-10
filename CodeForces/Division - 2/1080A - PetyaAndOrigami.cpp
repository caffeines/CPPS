//1080A
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

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n, k;
    while (scanf("%d %d", &n, &k) != EOF) {
        double res = 0;
        res += ceil((n * 8.0)/k );
        res += ceil((n * 2.0)/k );
        res += ceil((n * 5.0)/k );

        printf("%d\n", int(res));
    }
    return 0;
}
