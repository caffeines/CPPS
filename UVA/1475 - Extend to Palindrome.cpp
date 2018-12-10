/* Created by caffeines on 12/10/18 at 1:01 AM */
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


/*  Pattern Searching
 *  KMP k(s, p); // s -> text, p -> pattern
 *  k.kmp() will return matched result
*/

const int Size = (int)1e5;
struct KMP {
    int lps[Size];
    string text, pat;

    KMP(string &t, string &p) {
        this->text = t;
        this->pat = p;
    }

    void LPS(string &s) {
        int n = (int) s.size(), k = 0;
        for (int i = 1; i < n; ++i) {
            while (k > 0 && s[i] != s[k]) k = lps[k - 1];
            if (s[k] == s[i]) k++;
            lps[i] = k;
        }
    }

    int kmp() {
        LPS(pat);
        int q = 0, res = 0;
        for (int i = 0; i < text.size(); ++i) {
            while (q > 0 && pat[q] != text[i]) q = lps[q - 1];
            if (pat[q] == text[i]) q++;
            if (pat.size() == q) res++, q = lps[q - 1];
        }
        return q;
    }

};

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    string s, rs;
    while (cin >> s){
        rs = s;
        reverse(rs.begin(), rs.end());
        if(rs == s){
            cout<<s<<endl;
            continue;
        }
        KMP k(s, rs);
        int q = k.kmp();
        cout<<s;
        for(int i = q; i < s.size();i++ )
            cout<<rs[i];
        cout<<endl;
    }
    return 0;
}

