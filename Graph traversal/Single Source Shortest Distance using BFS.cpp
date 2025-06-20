#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src] = true;
   
    level[src] = 0;

    while (!q.empty())
    {
        // 1. Extract the node
        int par = q.front();
        q.pop();

        // 2. Work with that node, if any

        // 3. Push its children 
        for(int child : adj_list[par])
        {
            if( !vis[child])
            {
                q.push(child);
                vis[child] = true;

                level[child] = level[par] + 1;
            }      
        }
    }  
}


int main()
{
    Naba

    int n, e;  
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b); 
        adj_list[b].push_back(a);  
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int src, dst;
    cin >> src >> dst;

    bfs(src);

    // for(int i = 0; i < n; i++)
    //     cout << i << " -> " << level[i] <<endl;

    cout << level[dst] << endl;
    cout << level[4] << endl;

    return 0;
}