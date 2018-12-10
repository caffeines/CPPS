# include <bits/stdc++.h>
using namespace std;
# define DEBUGMODE forthright48
# define check(i, j)  ((i >= 1 && i <= 8) && (j >= 1 && j <= 8))
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

int hx[] = {+1, -1, -1, +1, -2, -2, +2, +2};
int hy[] = {+2, +2, -2, -2, +1, -1, +1, -1};

struct Node {
    int x, y, cost;

    Node() {};

    Node(int x, int y, int cost) {
        this->x = x;
        this->y = y;
        this->cost = cost;
    }
};

int bfs(int sx, int sy, int dx, int dy) {

    queue<Node> q;
    int cost = 0;
    q.push(Node(sx, sy, cost)); //insert in queue

    while (!q.empty()) {
        Node u = q.front();
        q.pop();
        if (u.x == dx && u.y == dy)
            return u.cost;
        for (int i = 0; i < 8; i++) {

            Node v;
            v.x = u.x + hx[i];
            v.y = u.y + hy[i];
            v.cost = u.cost + 1;
            if(check(v.x, v.y)){
                q.push(v);
            }

        }
    }
}


int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    string x, y;
    while (cin >> x >> y) {
        int sx = x[0] - 'a'+1;
        int sy = x[1] - '0';
        int dx = y[0] - 'a'+1;
        int dy = y[1] - '0';

        int res = bfs(sx, sy, dx, dy);
        cout<<"To get from "<<x<<" to "<<y<<" takes "<<res<<" knight moves."<<endl;


    }

    return 0;
}
