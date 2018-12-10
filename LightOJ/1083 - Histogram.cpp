/* Created by caffeines on 12/6/18 at 2:35 AM */
# include <bits/stdc++.h>

using namespace std;
typedef long long LL;

int nextInt() {
    int n;
    scanf("%d", &n);
    return n;
}

void print(LL n) {
    printf("%lld\n", n);
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
int arr[30005], Left[30005], Right[30005];

int main() {
    int T;
    scanf("%d", &T);
    for (int kase = 1; kase <= T; kase++) {
        printf("Case %d: ", kase);
        int n = nextInt();

        stack<pair<int, int>> st;
        st.push({-1, 0});
        for (int i = 1; i <= n; ++i) {
            arr[i] = nextInt();
            while (arr[i] <= st.top().first) {
                st.pop();
            }
            Left[i] = st.top().second + 1;
            st.push({arr[i], i});
        }

        while (!st.empty()) st.pop();
        st.push({-1, n + 1});

        for (int i = n; i >= 1; --i) {
            while (arr[i] <= st.top().first) {
                st.pop();
            }
            Right[i] = st.top().second;
            st.push({arr[i], i});
        }
        LL ans = -43654;
        for (int i = 1; i <= n; ++i) {
            ans = max(ans, (LL) arr[i] * (Right[i] - Left[i]));
        }
        print(ans);

    }
    return 0;
}

