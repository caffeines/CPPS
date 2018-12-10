# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long ll;
/*           ▂▃▅▇█▓▒░۩۞۩ ۩۞۩░▒▓█▇▅▃▂
               stop doubting yourself,
            work hard and make it happen.
             ▂▃▅▇█▓▒░۩۞۩ ۩۞۩░▒▓█▇▅▃▂       */

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n, s;
    while(scanf("%d %d", &n, &s) != EOF) {
        int t = s / n;
        if (s%n)
            t++;
        printf("%d\n", t);
    }
    return 0;
}
