# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long ll;

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n;
    string s;
    while (cin >> n >> s) {
        int cnt = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
