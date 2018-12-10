//
// Created by caffeines on 11/26/18.
//
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

const int size = 26;
vector<string> words;
bool ok = true;
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
            node->pre++;
        }
        node->cnt++;

    }

    /* Search a string in trie*/
    Node* search(string &s) {
        Node *node = root;
        for (int i = 0; i < s.size(); i++) {
            int c = getId(s[i]);
            node = node->child[c];
            if (node == NULL){
                ok = false;
                return node;
            }
        }
        return (node);
    }



    void DFS(Node *node, string word) {
        if(node->cnt) {
            if(word != "")
                words.push_back(word);
        }

        for(int i = 0; i < 26; i++)
            if(node->child[i] != NULL)
                DFS(node->child[i], word + char(i + 'a'));
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

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n;
    char s[100];
    scanf("%d", &n);
    while (n--){

        memset(s, '\0', sizeof(s));
        scanf("%s", s);
        string str(s);
        str = s;
        trie.add_String(str);
    }

    int T;
    scanf("%d", &T);
    for (int kase = 1; kase <= T; kase++) {

        printf("Case #%d:\n", kase);
        ok = true;
        words.clear();
        memset(s, '\0', sizeof(s));
        scanf("%s", s);
        string str(s);
        str = s;

        Node * n = trie.search(str);
        if(n == trie.root || !ok){
            puts("No match.");
        } else{
            trie.DFS(n,"");
            for (int i = 0; i < words.size(); ++i) {
                printf("%s%s\n",str.c_str(), words[i].c_str());
            }
        }
    }
    return 0;
}

