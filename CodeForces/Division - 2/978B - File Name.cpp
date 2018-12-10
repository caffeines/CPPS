/* Created by caffeines on 12/10/18 at 4:03 PM */
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
    int cnt, sum, n;
    while (cin >> n) {
        sum = cnt = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'x') {
                cnt++;
            } else {
                if (cnt >= 3) sum += (cnt - 2);
                cnt = 0;
            }
        }
        if (cnt >= 3) sum += (cnt - 2);
        cout << sum << endl;
    }
    return 0;
}

