/* Created by caffeines on 12/10/18 at 5:19 PM */
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
    int n, k;
    while (cin >> n >> k) {
        string s;
        cin >>s;
        map< char , int> mp;
        mp.clear();
        int Min = (int)1e7;
        for( int i = 0; i < k; i++ ){
            char x = 'A' + i;
            for (int j = 0; j < s.size(); ++j) {
                if(x == s[j]){
                    mp[x]++;
                }
            }
        }
        for( int i = 0; i < k; i++ ) {
            char x = 'A' + i;
            Min = min(mp[x], Min);
        }
        cout<<Min * k<<endl;
    }
    return 0;
}

