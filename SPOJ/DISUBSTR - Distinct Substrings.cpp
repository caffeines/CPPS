# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long ll;


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

const int size = 52;
int counter = 0;

struct Node {
    Node *child[size] = {NULL};
    int cnt = 0, pre = 0;

    Node() {}
};

struct Trie {
    Node *root;

    Trie() {
        root = new Node();
    }

    /* Return integer value of alphabet and number */
    int getId(const char &c) {
        if (islower(c))
            return c - 'a';
        return (int) c - 'A' + 26;
    }

    /* String insertion in trie */
    void add_String(string &s) {
        Node *node = root;
        for (int i = 0; i < s.size(); i++) {
            int c = getId(s[i]);
            if (node->child[c] == NULL) {
                node->child[c] = new Node();
                counter++;
            }
            node = node->child[c];
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
        for (int i = 0; i < size; i++) {
            if (node->child[i] != NULL) clean(node->child[i]);
        }
        delete (node);
    }

    /* dont forget to clear memory */
} trie;


int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    int n;
    cin >> n;
    while (n--) {
        trie.clear();
        counter = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            string temp = s.substr(i);
            trie.add_String(temp);
        }
        cout << counter << endl;
    }
    return 0;
}
