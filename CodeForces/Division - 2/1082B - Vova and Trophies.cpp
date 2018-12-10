/* Created by caffeines on 11/28/18. */

# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long ll;

int nextInt() {
    int n;
    scanf("%d", &n);
    return n;
}

void print(int n) {
    printf("%d\n", n);
    return;
}

int longestSubSeg(string s, int n) {
    int cnts = 0, cntg = 0;
    int l = 0;
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'S') cnts++;
        if (s[i] == 'G') cntg++;
        while (cnts > 1) {
            if (s[l] == 'S')
                cnts--;
            l++;
        }
        max_len = max(max_len, i - l + 1);
    }
    return min(max_len, cntg);
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int x = nextInt();
    string s;
    cin >> s;
    int res = longestSubSeg(s, x);
    print(res);
    return 0;
}

