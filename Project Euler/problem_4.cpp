/* Created by caffeines on 12/5/18 at 3:47 PM */
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

bool check(int n){
    stringstream ss;
    ss << n;
    string s =ss.str();

    for( int i = 0; i <= s.size()/2; i++){
        if(s[i] != s[s.size() - i - 1]){
            return false;
        }
    }
    return true;
}
int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    int mx = -15454;
    for(int i = 1; i <= 999; i++ ){
        for(int j = 1; j <= 999; j++ ){
            int res = i * j;
            //debug(res);
            if(check(res))
                mx = max(mx, res);
        }
    }
    cout<<mx<<endl;
    return 0;
}

