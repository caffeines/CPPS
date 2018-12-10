/* Created by caffeines on 12/8/18 at 10:19 PM */
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
int Map[5][5] = {
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1},
        {1, 1, 0, 1, 1},
        {0, 0, 1, 0, 1},
        {1, 1, 1, 1, 0}
};

int arr[20];

void backTrack(int idx, int curr) {
    arr[idx] = curr+1;
    if (idx >= 8) {
        for (int i = 0; i < 9; i++) cout << arr[i] ;
        cout << endl;
        return;
    }
    for (int i = 0; i < 5; i++) {
        if (Map[i][curr]) {
            Map[i][curr] = Map[curr][i] = 0;
            backTrack(idx + 1, i);
            Map[i][curr] = Map[curr][i] = 1;
        }
    }
}

int main() {
    backTrack(0, 0);
    return 0;
}

