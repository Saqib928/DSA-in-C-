#include<bits/stdc++.h>
using namespace std;
class Graph {
public:
    int V;
    vector<vector<int>> adj;

    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << ":";
            for (int j : adj[i]) {
                cout << " -> " << j;
            }
            cout << endl;
        }
    }
};
int main() {
        int V;
        cout << "Enter number of vertices: ";
        cin >> V;
        Graph g(V);
        
        int E;
        cout << "Enter number of edges: ";
        cin >> E;
        
        cout << "Enter edges (u v):" << endl;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            g.addEdge(u, v);
        }
        
        cout << "Graph adjacency list:" << endl;
        g.printGraph();
        
        return 0;
}