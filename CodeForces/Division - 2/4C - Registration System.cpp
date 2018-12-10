/* Created by caffeines on 12/4/18 at 2:29 PM */
# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long LL;

int nextInt() {
    int n;
    scanf("%d", &n);
    return n;
}

void print(int n) {
    printf("%d\n", n);
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

const int size = 26;

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
            return c - 'A'+ 26;
        }
        return c - '0';
    }

    /* String insertion in trie */
    int add_String(string &s) {
        Node *node = root;
        for (int i = 0; i < s.size(); i++) {
            int c = getId(s[i]);
            if (node->child[c] == NULL) node->child[c] = new Node();
            node = node->child[c];
            node->pre++;
        }
        node->cnt++;

        return  node->cnt;
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

    int n;
    string str;
    while (cin >> n) {
        trie.clear();
        for(int i = 0; i < n; i++ ){
            cin>>str;
            int x = trie.add_String(str);
            if(x == 1){
                cout<<"OK"<<endl;
            } else{
                cout<<str<<x-1<<endl;
            }
        }
    }

    return 0;
}

