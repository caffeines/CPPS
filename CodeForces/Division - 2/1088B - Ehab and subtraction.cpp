/* Created by caffeines on 12/4/18 at 9:15 PM */
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
map<int, int> mp;
vector<int> v;

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n, k;
    v.clear(), mp.clear();
    cin >> n >> k;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        if (!mp[x]) {
            mp[x]++;
            v.push_back(x);
        }
    }

    sort(v.begin(), v.end());
    for (int j = 0; j < k; ++j) {
        if( j >= v.size() ){
            cout<<"0"<<endl;
            continue;
        }
        if (j > 0) {
            cout << v[j] - v[j - 1] << endl;
        } else
            cout << v[j] << endl;
    }

    return 0;
}

