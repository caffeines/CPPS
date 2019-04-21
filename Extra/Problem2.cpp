# include <bits/stdc++.h>
using namespace std;
typedef long long LL;

#define N 100001
vector <int> graph[N];
bool visit[N];
int dist [N], path[N];
int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};

void printPath(int en )
{
    if( en ==0) return;
    printPath(path[en]) ;
    printf("%d ",en) ;
}
int res[N], st , en;
void bfs(int start)
{
    queue <int> q;
    dist[start] = 0;
    q.push(start); //insert in queue
    res[start] += start;
    path[start] = 0;
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for (int i = 0; i < 8; i++ ) {
            graph[u].push_back(arr[i]);
        }
        for(int i = 0;i<graph[u].size();i++) // check all adjacent node
        {
            int v = graph[u][i];
            if( res[v] + u <= en ) {
                res[v] += u;
            }
            dist[v] = dist[u]+1;
            path[v] = u;
            if(res[v] == en) {
                printPath(en);
                return;
            }
            q.push(v);
        }
    }
}



void Clear()
{
    for(int i=0;i<N;i++)
        graph[i].clear();
    memset(visit, 0, sizeof(visit));
}

int main() {
    while (cin >> st >> en) {
        Clear();
        bfs(st);
    }
    return 0;
}
