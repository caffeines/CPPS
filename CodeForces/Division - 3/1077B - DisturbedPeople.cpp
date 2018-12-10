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
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] == 1 && a[i + 1] == 1 && a[i] == 0) {
            a[i + 1] = 0;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}