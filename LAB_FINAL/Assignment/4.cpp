#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;
public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void DFS(int start, int end) {
        vector<bool> visited(V, false);
        stack<int> s;
        vector<int> path;

        s.push(start);
        visited[start] = true;

        while (!s.empty()) {
            int node = s.top();
            s.pop();
            path.push_back(node);

            if (node == end) {
                cout << "DFS Path: ";
                for (int n : path) {
                    cout << n << " ";
                }
                cout << endl;
                return;
            }

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    s.push(neighbor);
                }
            }
        }
        cout << "No path found" << endl;
    }
};

int main() {
    int V, E;
    cout << "Enter number of junctions (nodes) and paths (edges): ";
    cin >> V >> E;
    
    Graph g(V);
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    
    int start, end;
    cout << "Enter start and end junctions: ";
    cin >> start >> end;
    
    g.DFS(start, end);
    
    return 0;
}
