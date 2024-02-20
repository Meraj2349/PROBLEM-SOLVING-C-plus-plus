#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
using namespace std;
  bool visited[100]; // Corrected initialization to boolean array
    vector<int> adj[100]; 

   void dfs(int node)
    {
        visited[node]=true;

        cout<<node <<endl;

        vector<int> :: iterator it ;

        for(it = adj[node].begin(); it< adj[node].end(); it++)
        {
            if(!visited[*it])
            {
                dfs(*it);
            }
        }
    }

int32_t main()
{
   // Corrected declaration of adj

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
 

     dfs(1);
    
}