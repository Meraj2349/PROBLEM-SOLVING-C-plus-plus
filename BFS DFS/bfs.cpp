#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    bool visited[100]; // Corrected initialization to boolean array
    vector<vector<int>> adj(100); // Corrected declaration of adj

    for (int i = 0; i < 100; i++)
    {
        visited[i] = false; // Corrected initialization to boolean value
    }

    int edge, node;
    cin >> edge >> node;

    int x_connected, y_connected;

    for (int i = 0; i < edge; i++)
    {
        cin >> x_connected >> y_connected;
        adj[x_connected].push_back(y_connected); // Corrected accessing elements of adj
        adj[y_connected].push_back(x_connected); // Corrected accessing elements of adj
    }
    queue<int> q;

    // starting node

    q.push(1);

    visited[1] = true;

    while (!q.empty())
    {
        int currentNode = q.front();
        cout<<" node :"<< currentNode<<endl;
        q.pop();

        for (int i = 0; i < adj[currentNode].size(); i++)
        {
            cout << adj[currentNode][i] << " :current node " << endl; // Corrected accessing elements of adj

            int adjNode = adj[currentNode][i];

            if (!visited[adjNode])
            {
                visited[adjNode] = true; // Corrected assignment to boolean value
                q.push(adjNode);
            }

            /* code */
        }

        /* code */
    }
    return 0; // Added return statement
}
