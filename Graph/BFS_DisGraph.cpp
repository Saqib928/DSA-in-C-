#include<bits/stdc++.h>
using namespace std;
class Graph {
private:
    int V;
    vector<vector<int>> adj;

    void BFSUtil(int start, vector<bool>& visited) {
        queue<int> q;
        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void BFS() {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                BFSUtil(i, visited);
                cout << endl;
            }
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
        if(u >= 0 && u < V && v >= 0 && v < V) {
            g.addEdge(u, v);
        } else {
            cout << "Invalid vertices. Must be between 0 and " << V-1 << endl;
            i--;
        }
    }
    
    cout << "\nBFS traversal of disconnected graph:\n";
    g.BFS();
    
    return 0;
}