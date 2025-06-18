#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba

    int n,e;
    cin >> n >> e;
    
    int adj_mat[n][n];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            adj_mat[i][j] = 0;
            
    // memset(adj_mat, 0, sizeof(adj_mat));
    
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i==j)
                adj_mat[i][j] = 1;
                
            
    
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;
        
    }
    
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << adj_mat[i][j] << " ";
        cout << endl;
    }
      
    
    

    return 0;
}

/*

/*
Adjacency Matrix:
   - A 2D array to represent connections between nodes.
   - adj_mat[i][j] = 1 means node i is directly connected to node j.
   - adj_mat[i][j] = 0 means no direct connection.

Declaration:
   int adj_mat[n][n];  // Creates an n x n matrix for n nodes.

Input:
   n = number of nodes
   e = number of edges

Initialization:
   - Usually initialized with 0 (no edges).
   - Optional: diagonal entries adj_mat[i][i] can be set to 1 to represent self-loops.

Check connection:
(Use Case: Check if two nodes x and y are connected or not)
   - To check if nodes i and j are connected, check adj_mat[i][j].
     Checking Connection Between Two Nodes:
   - To check if node x is connected to node y:
       if (adj_mat[x][y] == 1)
           → nodes x and y are connected
       else
           → nodes x and y are NOT connected
   - Access time is O(1).

Time and Space Complexity:
   - Building the matrix: O(n²)
   - Space complexity: O(n²), which can be large for big graphs.
   - Suitable for dense graphs or when quick edge lookup is required.
*/




/*
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba  // Fast IO setup

    int n, e;
    cin >> n >> e;  // Read number of nodes and edges
    
    int adj_mat[n][n];
    
    // Initialize all adjacency matrix elements to 0 (no edges)
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            adj_mat[i][j] = 0;
    // or you can use:
    // memset(adj_mat, 0, sizeof(adj_mat));
            
    // Optional: Mark self-loops (each node connected to itself)
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i == j)
                adj_mat[i][j] = 1;
                
    // Read each edge and update adjacency matrix
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;  // Edge between node a and b
        
        adj_mat[a][b] = 1;  // Mark connection a->b
        adj_mat[b][a] = 1;  // Mark connection b->a (undirected graph)
    }
    
    // Print the adjacency matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << adj_mat[i][j] << " ";  // Print connection info (1 or 0)
        cout << endl;  // New line after each row
    }

    return 0;
}
*/
