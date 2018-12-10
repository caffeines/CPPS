# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
# define sz 20
ifstream forthright48("input.txt");
typedef long long ll;

vector<int> graph[sz + 10];
int dist[sz + 10];
bool visited[sz + 10];

int bfs(int src, int dest) {
    visited[src] = true;
    dist[src] = 0;
    queue<int> q;
    q.push(src); //insert in queue

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 0; i < graph[u].size(); i++) { // check all adjacent node
            int v = graph[u][i];
            if (visited[v]) continue;
            dist[v] = dist[u] + 1;
            if (dist[dest])
                return dist[dest];
            visited[v] = true;
            q.push(v);
        }
    }
}

void clear() {
    for (int i = 0; i < sz + 10; i++) {
        graph[i].clear();
    }
    memset(dist, 0, sizeof(dist));
    memset(visited, 0, sizeof(visited));
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    int i = 1, cace = 1, numI, numJ, n, start, to;
    while (scanf("%d", &numI) != EOF) {
        for (int j = 0; j < numI; ++j) {
            scanf("%d", &numJ);
            graph[i].push_back(numJ);
            graph[numJ].push_back(i);
        }
        if (i == 19) {
            scanf("%d", &n);
            printf("Test Set #%d\n", cace++);
            for (int k = 0; k < n; ++k) {
                memset(dist, 0, sizeof(dist));
                memset(visited, 0, sizeof(visited));

                scanf("%d %d", &start, &to);

                int res = bfs(start, to);

                printf("%2d to %2d: %d\n", start, to, res);

            }
            printf("\n");
            //Reset all;
            i = 0;
            for (int i = 0; i < sz + 10; ++i) {
                graph[i].clear();
            }

        }
        i++;
    }
    return 0;
}
