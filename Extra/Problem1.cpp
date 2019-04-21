# include <bits/stdc++.h>
using namespace std;
typedef long long LL;

#define N 9
#define PII pair<int, int>
#define check(i, j) ((i >= 0 && i < 8) && (j >= 0 && j < 8))

int cell[N][N],r,c;
bool visit[N][N];
int dist [N][N];
PII path[N][N];
int hx[] = {+1,-1,-1,+1,-2,-2,+2,+2};
int hy[] = {+2,+2,-2,-2,+1,-1,+1,-1};

void printPath(int ex, int ey )
{
    if( ex == 0 && ey == 0) return;
    int x = path[ex][ey].first;
    int y = path[ex][ey].second;
    printPath(x, y);
    char X = ex + 'a', Y = ey + '0' + 1;
    cout << X << Y << " ";
}

void bfs2D(int sx, int sy, int ex, int ey)
{
    memset( visit, 0, sizeof(visit));
    memset( path, 0, sizeof(path));
    visit[sx][sy] = true;
    queue <PII> q;

    dist[sx][sy] = 0;
    q.push( {sx, sy} ); //insert in queue
    while(!q.empty())
    {
        PII top = q.front(); q.pop();
        for( int i = 0; i < 8; i++) {
            int u = top.first + hx[i];
            int v = top.second + hy[i];

            if(check(u, v) && !visit[u][v]){
                visit[u][v] = true;
                dist[u][v] = dist[top.first][top.second] + 1;
                q.push({u, v});
                path[u][v] = { top.first, top.second };
                if(u == ex && v == ey) {
                    break;
                }
            }
        }
    }
}

int main() {
    string s1, s2;
    while( cin >> s1 >> s2 ) {
        int x1, y1, x2, y2;
        x1 = s1[0] - 'a', y1 = s1[1] - '0' - 1;
        x2 = s2[0] - 'a', y2 = s2[1] - '0' - 1;
        bfs2D(x1, y1, x2, y2);

        printPath(x2, y2);
        cout << endl;
    }
    return 0;
}

