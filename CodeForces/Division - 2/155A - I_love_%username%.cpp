/* Created by caffeines on 12/8/18 at 3:44 PM */
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

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n = nextInt(), Max, Min, cnt = 0, x;
    Max = Min = x = nextInt();
    //debug(Max, Min);
    for( int i = 1; i < n; i++ ){
        x = nextInt();
        if(Max < x){
            Max = x;
            cnt++;
        } else if(Min > x){
            Min = x;
            cnt++;
        }
    }
    print(cnt);

    return 0;
}

