
#include <bits/stdc++.h>

using namespace std;

// Function to perform Depth-Limited Search (DLS)
bool DLS(int current, int target, int depth, vector<vector<int>>& adjList, vector<bool>& visited) {
    if (current == target)
        return true; // Target found
    if (depth <= 0)
        return false; // Depth limit reached
    visited[current] = true;
    for (int adjacent : adjList[current]) {
        if (!visited[adjacent] && DLS(adjacent, target, depth - 1, adjList, visited))
            return true; // Target found within the depth limit
    }
    return false; // Target not found within the depth limit
}

// Function to perform Iterative Deepening Depth-First Search (IDDFS)
bool IDDFS(int start, int target, int maxDepth, vector<vector<int>>& adjList) {
    for (int depth = 0; depth <= maxDepth; ++depth) {
        vector<bool> visited(adjList.size(), false);
        if (DLS(start, target, depth, adjList, visited))
            return true; // Target found within the depth limit
    }
    return false; // Target not found within the maximum depth limit
}



int main() {
  
    // Adjacency list representation of the graph

   int edge, node;
    cin >> edge >> node;
    vector<vector<int>> adjList(edge); 

    int x_connected, y_connected;

    for (int i = 0; i < edge; i++)
    {
        cin >> x_connected>> y_connected;
        adjList[x_connected].push_back(y_connected); // Corrected accessing elements of adj
        
    }

    int start = 0; // Starting node
    int target = 5; // Target node
    int maxDepth = 3; // Maximum depth to explore

    // Perform Iterative Deepening Depth-First Search (IDDFS)
    if (IDDFS(start, target, maxDepth, adjList))
        cout << "Target found within depth limit!" << endl;
    else
        cout << "Target not found within depth limit." << endl;

    return 0;
}
