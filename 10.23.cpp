#include <iostream>
#include <vector>
using namespace std;

// Graph Node structure

struct Edge {int to, weight;};
class Graph {
    vector<vector<Edge>> adj;
    public: 
        Graph(int n) : adj(n) {}
        void addEdge(int u, int v, int w = 1) {
            adj[u].push_back({v, w});
            adj[v].push_back({u, w}); // Skip if directed
        }
        bool hasEdge(int u, int v) {
            for (const auto& edge : adj[u]) { // 0(deg u)
                if (edge.to == v) return true;
            }
            return false;
        }
        vector<Edge>& neighbors(int u) {
            return adj[u];
        }
};

// The trade-off
/* Operation - Matrix - List
Space - 0(n^2) - 0(n + m)
Is u-v an edge? - 0(1) - 0(deg u)
List u's neighbors - 0(n) - 0(deg u)
Add an edge - 0(1) - 0(1)
*/