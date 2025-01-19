#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5+1;
const int maxM = 2e5+1;

int N, M, u, v, w, parent[maxN];

long long totalWeight;

vector<pair<int, pair<int,int>>> edges;

int find(int node){

    if(parent[node] < 0) 
    {
        return node;
    }
    return parent[node] = find(parent[node]);
}

bool merge(int u, int v){
    u = find(u);
    v = find(v);

    if(u == v)
    {
        return false;
    
    }

    if(parent[u] < parent[v]) 
    {
        swap(u, v);
    }

    
    parent[v] += parent[u];
    parent[u] = v;
    return true;
}

int main(){
    cin >> N >> M;
   
    for(int i = 1; i <= N; i++) parent[i] = -1;


    for(int i = 0; i < M; i++){
        cin >> u >> v >> w;
        edges.push_back ({w, {u, v}});
    }
    
    sort(edges.begin(), edges.end());

    for(auto edge : edges){
        int weight = edge.first;
        int node1 = edge.second.first;
        int node2 = edge.second.second;

        if(merge(node1, node2)){
            totalWeight += weight;
            N--;
        }
    }

    if(N == 1) cout << totalWeight << endl;

    else cout << "IMPOSSIBLE" << endl;
    
    return 0;
}
