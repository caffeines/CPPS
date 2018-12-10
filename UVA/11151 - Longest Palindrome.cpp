/* Created by caffeines on 12/9/18 at 2:15 AM */
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

/* Longest Palindromic Subsequence
 * LPS.init(string)
 * Length of the longest palindromic subsequence
 *      @ Recursive: LPS.lps(0, len) len -> size of length
 *      @ Itarative: LPS.lps()
 * Print longest palindromic subsequence
 *      @ LPS.Print()
*/
const int Size = (int) 1e3;

struct LongestPalindromicSubsequence {
    string str;
    int n, DP[Size][Size];

    LongestPalindromicSubsequence() {}

    void init(string &str) {
        this->str = str;
        this->n = (int) str.size();
        memset(DP, 0, sizeof(DP));
    }

    int lps() {
        // Strings of length 1 are palindrome of lentgh 1
        for (int i = 0; i < n; i++) DP[i][i] = 1;
        for (int cl = 2; cl <= n; cl++) {
            for (int i = 0; i < n - cl + 1; i++) {
                int j = i + cl - 1;
                if (str[i] == str[j] && cl == 2)
                    DP[i][j] = 2;
                else if (str[i] == str[j])
                    DP[i][j] = DP[i + 1][j - 1] + 2;
                else
                    DP[i][j] = max(DP[i][j - 1], DP[i + 1][j]);
            }
        }

        return DP[0][n - 1];
    }

    int lps(int start, int len) {
        // need to test
        if (len == 1) return 1;
        if (len == 0) return 0;
        if (str[start] == str[start + len - 1])
            return 2 + lps(start + 1, len - 2);
        else
            return max(lps(start + 1, len - 1), lps(start, len - 1));

    }

    /** FINDING LCS IN N^2 USING NESTED LOOP **/
    string LCS(string &str1, string &str2) {
        int len1 = (int) str1.size();
        int len2 = (int) str2.size();
        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                if (str1.at(i) == str2.at(j)) {
                    DP[i][j] = DP[i + 1][j + 1] + 1;
                } else {
                    DP[i][j] = max(DP[i + 1][j], DP[i][j + 1]);
                }
            }
        }

        int i = 0, j = 0;
        string pal = "";
        while (i < len1 && j < len2) {
            if (str1.at(i) == str2.at(j)) {
                pal += str1.at(i);
                i++, j++;
            } else if (DP[i + 1][j] >= DP[i][j + 1]) i++;
            else j++;
        }
        return pal;
    }

    string Print() {
        string rev = str;
        reverse(rev.begin(), rev.end());
        return LCS(str, rev);
    }
} LPS;

int main() {
    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    size_t T;
    cin >> T;
    cin.ignore();
    while ( T-- )
    {
        string s;
        getline(cin, s);
        if (s == "")
        {
            cout << "0" << endl;
            continue;
        }
        LPS.init(s);
        cout << LPS.lps()<< endl;
    }
    return 0;
}

