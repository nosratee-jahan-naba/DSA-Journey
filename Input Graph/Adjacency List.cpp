#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba

    int n, e;  
    cin >> n >> e;

    vector<int>adj_list[n];

    while(e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b); 
        adj_list[b].push_back(a);  // Adds an edge between a and b (both ways for undirected).
    }


    for(int i = 0; i < n; i++)
    {
        cout << i << "->";
        for(int x : adj_list[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Sample Input:
5 5
0 1
0 2
3 0
1 3
3 4

Output:
0->1 2 3 
1->0 3 
2->0 
3->0 1 4 
4->3 

*/


/* 
Adjacency List:
   - Shows which nodes are directly connected to each node.

Declaration:
   vector<int> adj_list[n];  // Creates an array of vectors for n nodes
   → Each index 'i' of adj_list stores a vector of nodes connected to node 'i'

Input:
   n = number of nodes
   e = number of edges

Degree of a Node:
   adj[node].size() → gives the number of nodes directly connected to 'node'
   Example:
       If adj[3] = {0, 1, 4}, then adj[3].size() = 3
       → Node 3 is connected to 3 other nodes

Time Complexity:
   - Building the list: O(n + e)
   - Accessing adj[node]: O(1)
*/


/*
while(e--)  // loop runs e times to take all edge inputs.
{
    int a, b;
    cin >> a >> b;

    // Add an edge between node 'a' and node 'b'
    // if the graph is undirected, we add both:\
    //else only first
    adj_list[a].push_back(b);  // b is connected to a,   store b as a neighbor of a.
    adj_list[b].push_back(a);  // a is connected to b
}

// Print the adjacency list
// Format: node -> list of directly connected nodes
for(int i = 0; i < n; i++)
{
    cout << i << " -> ";
    for(int x : adj_list[i])
    {
        cout << x << " ";
    }
    cout << endl;
}

*/