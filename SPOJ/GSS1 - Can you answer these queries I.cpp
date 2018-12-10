//
// Created by caffeines on 11/27/18.
//
# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
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

struct Node {
    int prefixSum, suffixSum, maxSum, sum;

    void assignLeaf(int value) {
        prefixSum = suffixSum = maxSum = sum = value;
    }

    void merge(Node &left, Node &right) {
        sum = left.sum + right.sum;
        prefixSum = max(left.prefixSum, left.sum + right.prefixSum);
        suffixSum = max(right.suffixSum, right.sum + left.suffixSum);
        maxSum = max(prefixSum, max(suffixSum, max(left.maxSum, max(right.maxSum, left.suffixSum + right.prefixSum))));
    }

    int getValue() {
        return sum;
    }
};

// T is the type of input array elements
// V is the type of required aggregate statistic
template<class T, class V>
class SegmentTree {
    Node *node;
    int N;

public:
    SegmentTree(T arr[], int N) {
        this->N = N;
        node = new Node[getSize(N)];
        buildTree(arr, 1, 0, N - 1);
    }

    ~SegmentTree() {
        delete[] node;
    }

    V getValue(int lo, int hi) {
        Node result = getValue(1, 0, N - 1, lo, hi);
        return result.getValue();
    }

    void update(int index, T value) {
        update(1, 0, N - 1, index, value);
    }

private:
    void buildTree(T arr[], int curr, int lo, int hi) {
        if (hi == lo) {
            node[curr].assignLeaf(arr[lo]);
            return;
        }
        int left = 2 * curr, right = left + 1;
        int mid = (lo + hi) / 2;
        //debug(node[curr].getValue(), left, right, mid, curr);
        buildTree(arr, left, lo, mid);
        buildTree(arr, right, mid + 1, hi);

        node[curr].merge(node[left], node[right]);
    }

    Node getValue(int curr, int left, int right, int lo, int hi) {
        if (left == lo && right == hi) {
            return node[curr];
        }
        int mid = (left + right) / 2;

        Node leftResult = getValue(2 * curr, left, mid, lo, mid);
        Node rightResult = getValue(2 * curr + 1, mid + 1, right, mid + 1, hi);
        Node result;

        result.merge(leftResult, rightResult);
        return result;
    }

    int getSize(int N) {
        int sz = 1;
        for (; sz < N; sz <<= 1);
        return sz << 1;
    }

    void update(int curr, int lo, int hi, int index, T value) {
        if (lo == hi) {
            node[curr].assignLeaf(value);
            return;
        }

        int left = 2 * curr, right = left + 1, mid = (hi + lo) / 2;
        if (index <= mid)
            update(left, lo, mid, index, value);
        update(right, mid + 1, hi, index, value);

        node[curr].merge(node[left], node[right]);

    }

};


int main() {
    freopen("input.txt", "r", stdin);
    int N, i, A[50000], M, x, y, operation;

    scanf("%d", &N);
    for (i = 0; i < N; ++i)
        scanf("%d", &A[i]);
    SegmentTree<int, int> st(A, N);

    scanf("%d", &M);
    for (i = 0; i < M; ++i) {
        scanf("%d %d %d", &operation, &x, &y);
        if (operation == 0)
            st.update(x - 1, y);
        else
            printf("%d\n", st.getValue(x - 1, y - 1));
    }

    return 0;
}
