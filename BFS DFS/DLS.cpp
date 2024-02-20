// There are two common ways to traverse a graph, BFS and DFS.
//    Considering a Tree (or Graph) of huge height and width, both BFS and DFS are not very efficient due to following reasons.

// DFS first traverses nodes going through one adjacent of roo, 
//   then next adjacent. The problem with this approach is, if there is a node close to root,
//   but not in first few subtrees explored by DFS, then DFS reaches that node very late. 
//   Also, DFS may not find shortest path to a node (in terms of number of edges).
// BFS goes level by level, but requires more space.
//   The space required by DFS is O(d) where d is depth of tree, 
//   but space required by BFS is O(n) where n is number of nodes in tree (Why? Note that the last level of tree can have around n/2 nodes and second last level n/4 nodes and in BFS we need to have every level one by one in queue).


#include <bits/stdc++.h>

using namespace std;

// Function to perform Depth-Limited Search (DLS)
bool DLS(int current, int target, int depth, vector<vector<int>>& adjList, vector<bool>& visited) {
    if (depth == 0 && current == target) {
        return true; // Target found at the specified depth
    }
    if (depth > 0) {
        visited[current] = true;
        for (int adjacent : adjList[current]) {
            if (!visited[adjacent] && DLS(adjacent, target, depth - 1, adjList, visited)) {
                return true; // Target found within the depth limit
            }
        }
    }
    return false; // Target not found within the depth limit
}

// Function to add an edge to the graph


int main() {
    // Adding edges to the graph
    
    int edge, node;
    cin >> edge >> node;
    vector<vector<int>> adjList(edge); 

    int x_connected, y_connected;

    for (int i = 0; i < edge; i++)
    {
        cin >> x_connected>> y_connected;
        adjList[x_connected].push_back(y_connected); // Corrected accessing elements of adj
        adjList[y_connected].push_back(x_connected); // Corrected accessing elements of adj
    }

    int start = 0; // Starting node

    int target = 5; // Target node

    int maxDepth = 3; // Maximum depth to explore

    // Create a visited array
    vector<bool> visited(edge, false);

    // Perform Depth-Limited Search (DLS)
    if (DLS(start, target, maxDepth, adjList, visited)) {
        cout << "Target found within depth limit!" << endl;
    } else {
        cout << "Target not found within depth limit." << endl;
    }

    return 0;
}
