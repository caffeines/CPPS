/* Created by caffeines on 12/6/18 at 12:10 AM */
# include <bits/stdc++.h>

using namespace std;
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

string sin() {
    int mx = (int) 1e6 + 10;
    char c[mx];
    scanf("%s", c);
    string s(c);
    return s;
}

struct KMP {
    int *lps;
    string text, pat;

    KMP(string s, string p) {
        text = s;
        pat = p;
        lps = new int[(int) s.size()];
    }

    void LPS(string s) {
        int n = (int) s.size(), k = 0;
        for (int i = 1; i <= n; ++i) {
            while (k > 0 && s[k] != s[i]) k = lps[k - 1];
            if (s[k] == s[i]) k++;
            lps[i] = k;
        }
    }

    int init() {
        int tlen = (int) text.size(), plen = (int) pat.size();
        LPS(pat);
        int q = 0, res = 0;
        for (int i = 0; i < tlen; i++) {
            while (q > 0 && pat[q] != text[i])
                q = lps[q - 1];
            if (pat[q] == text[i]) q++;
            if (q == plen) {
                res++;
                q = lps[q - 1];
            }
        }
        return res;
    }
};


int main() {

    int T = nextInt();
    for (int kase = 1; kase <= T; kase++) {

        string s = sin();
        string p = sin();

        KMP kmp(s, p);
        int cnt = kmp.init();
        printf("Case %d: %d\n", kase, cnt);
    }

    return 0;

}

