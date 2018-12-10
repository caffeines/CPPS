//
// Created by caffeines on 11/19/18.
//

# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
# define Size (int) 10e5 + 10
ifstream forthright48("input.txt");
typedef long long ll;

int a[Size], n;

void solve() {
    for (int j = 0; j < n - 2; ++j) {
        if (a[j] + a[j + 1] > a[j + 2]) {
            puts("YES");
            return;
        }
    }
    puts("NO");
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        sort(a, a + n);
        solve();
    }
    return 0;
}

