# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48

typedef long long ll;

int nextInt() {
    int n;
    scanf("%d", &n);
    return n;
}

void print(int n) { printf("%d\n", n); }

const int size = 10;

struct Node {
    Node *child[size] = {NULL};
    int cnt = 0, pre = 0;

    Node() {}
};

bool ok = true;

struct Trie {
    Node *root;

    Trie() {
        root = new Node();
    }

    /* Return integer value of alphabet and number */
    int getId(const char &c) {
        if (isalpha(c)) {
            if (islower(c))
                return c - 'a';
            return c - 'A';
        }
        return c - '0';
    }

    /* String insertion in trie */
    void add_String(string &s) {
        Node *node = root;
        for (int i = 0; i < s.size(); i++) {
            int c = getId(s[i]);
            if (node->child[c] == NULL) node->child[c] = new Node();
            node = node->child[c];
            if (node->cnt >= 1)
                ok = false;
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

    int T, n;
    string s;
    scanf("%d", &T);
    for (int kase = 1; kase <= T; kase++) {

        ok = true;
        n = nextInt();
        trie.clear();
        vector<string> v;

        for (int i = 0; i < n; ++i) {
            cin >> s;
            v.push_back(s);
        }

        sort(v.begin(), v.end());

        for (int j = 0; j < n; ++j) {
            trie.add_String(v[j]);
        }
        if (ok)
            printf("Case %d: YES\n", kase);
        else
            printf("Case %d: NO\n", kase);
    }

    return 0;
}
