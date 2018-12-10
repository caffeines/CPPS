/* Created by caffeines on 12/8/18 at 7:28 PM */
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
int r, taken[205];
string s;
vector <char> v;
void parmu(int idx) {
    if (v.size() >= r) {
        for (auto i: v) cout<<i;
        cout<<endl;
        return;
    }
    for(int i = idx; i < s.size(); i++ ){
        if(v.size() && v[v.size() - 1] > s[i]) continue;
        if(!taken[i]){
            taken[i] = 1;
            v.push_back(s[i]);
            parmu(idx + 1);
            v.pop_back();
            taken[i] = 0;
            while (s[i] == s[i+1]) i++;
        }
    }
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    while(cin>>s >> r){
        sort(s.begin(), s.end());
        parmu(0);
        v.clear();
        memset(taken, 0, sizeof(taken));
    }

    return 0;
}

