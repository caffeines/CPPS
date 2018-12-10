/* Created by caffeines on 12/4/18 at 10:21 PM */
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

int fib(int n){
    int sum = 0, s[100005];
    s[0] = 0, s[1] = 1, s[2] = 2;
    for( int i = 2; i <= n; i++ ){
        s[i] = s[i-1] + s[i-2];
        if( s[i] % 2 == 0){
            sum += s[i];
        }
        if( s[i] >= n)
            return sum;
    }
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    int n = 4000000;
    cout<<fib(n)<<endl;
    return 0;
}

