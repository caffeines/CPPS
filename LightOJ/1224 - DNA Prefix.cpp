# include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int nextInt() { int n; scanf("%d", &n); return n; }
void print(int n){ printf("%d\n", n); return; }

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

const int Size = 5;
int ans = -154;
struct Node {
    Node *child[Size] = {NULL};
    int cnt = 0, pre = 0, level = 0;

    Node() {}
};

struct Trie {
    Node *root;

    Trie() {
        root = new Node();
    }

    /* Return integer value of alphabet and number */
    int getId(const char &c) {
        if (c == 'A') return 0;
        if (c == 'C') return 1;
        if (c == 'G') return 2;
        if (c == 'T') return 3;
    }

    /* String insertion in trie */
    void add_String(string &s) {
        Node *node = root;
        for (int i = 0; i < s.size(); i++) {
            int c = getId(s[i]);
            if (node->child[c] == NULL)
            {
                node->child[c] = new Node();
            }
            node = node->child[c];
            node->pre++;
            ans = max(ans, node->pre  * (i+ 1));
        }
        node->cnt++;

    }

    /* Destruct all trie */
    void clear() {
        clean(root);
        root = new Node();
    }

    void clean(Node *node) {
        if (node == NULL) return;
        for (int i = 0; i < Size; i++) {
            if (node->child[i] != NULL) clean(node->child[i]);
        }
        delete (node);
    }

    /* dont forget to clear memory */

} trie;


int main() {

    char  s[50010];
    int T = nextInt();
    for (int kase = 1; kase <= T; kase++) {
        int n = nextInt();
        for (int i = 0; i < n; ++i) {
            scanf("%s", s);
            string str(s);
            trie.add_String(str);
        }
        timeStamp;
        printf("Case %d: %d\n", kase, ans);
        ans = -154;
        trie.clear();
    }

    return 0;
}
