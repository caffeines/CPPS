#include <bits/stdc++.h>
using namespace std;
#define Size 30
vector <int> graph[Size];
bool visited[Size];
void dfs(int x)
{
    visited[x] = true;
    for(int i = 0;i<graph[x].size();i++)
    {
        if(!visited[graph[x][i]])
        {
            dfs(graph[x][i]);
        }
    }
}
void Clear()
{
    for(int i=0;i<=Size;i++)
    {
        graph[i].clear();
    }
    memset(visited,false,sizeof(visited));
}
int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    while(n--)
    {
        int sub=0;
        Clear();
        char max;
        cin>>max;
        int m = max - 'A'+1;
        cin.ignore();
        while(1)
        {
            string str;
            getline(cin,str);
            if(str.size() == 0)
                break;
            int x = (str[0] - 'A')+1;
            int y = (str[1] - 'A')+1;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        for(int i = 1;i<=m;i++)
        {
            if(!visited[i])
            {
                dfs(i);
                sub++;
            }
        }
        cout<<sub<<endl;
        if(n)
            cout<<endl;
    }
    return 0;
}

