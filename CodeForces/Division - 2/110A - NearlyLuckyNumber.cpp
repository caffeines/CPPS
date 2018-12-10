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

    string s;
    while (cin >> s) {
        int seven = 0, four = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '7') {
                seven++;
            } else if (s[i] == '4') {
                four++;
            }
        }
        int res = four + seven;
        if (res == 4 || res == 7) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
