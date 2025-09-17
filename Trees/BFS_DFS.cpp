#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <unordered_set>

class GraphSearch {
private:
    std::unordered_map<int, std::vector<int>> adjList;

public:
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void bfs(int start) {
        std::queue<int> q;
        std::unordered_set<int> visited;

        q.push(start);
        visited.insert(start);
        std::cout << "BFS:\n";

        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            std::cout << "Visited: " << curr << std::endl;

            for (int neighbor : adjList[curr]) {
                if (visited.find(neighbor) == visited.end()) {
                    q.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }
    }

    void dfs(int start) {
        std::unordered_set<int> visited;
        std::cout << "DFS:\n";
        dfsRecursive(start, visited);
    }

private:
    void dfsRecursive(int node, std::unordered_set<int>& visited) {
        visited.insert(node);
        std::cout << "Visited: " << node << std::endl;

        for (int neighbor : adjList[node]) {
            if (visited.find(neighbor) == visited.end()) {
                dfsRecursive(neighbor, visited);
            }
        }
    }
};

int main() {
    GraphSearch graph;
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(2, 5);
    graph.addEdge(3, 6);
    graph.addEdge(3, 7);

    std::cout << "\nRunning BFS:\n";
    graph.bfs(1);

    std::cout << "\nRunning DFS:\n";
    graph.dfs(1);

    return 0;
}
