#include <iostream>
using namespace std;

// Graph ADT
/* ADT:
private:
    vertices
        edges

public:
    insertVertex(value)
    addEdge(startValue, endValue, weight)
    deleteVertex(value)
    deleteEdge(startValue, endValue)
    displayGraph()
    search(value) - simple linear search

    traversal methods: Breath first and depth frist search - more on that later though (im ahead a bit)

*/




// Unweighted vs weighted
// Weighted
private:
    std::vector<vertex*> vertices;

struct vertex {
    string key;
    vector<edge> adj;
};

// Weighted
private:
    std::vector<vertex*> vertices;

struct vertex {
    string key;
    vector<vertex*> adj;
};

void Graph::depthFirstTraverse(string key) {
    vertex* v = search(key);
    cout << v->key << endl;
    depthFirstRecurse(v);
}
void Graph::depthFirstRecurse(vertex* v) {
    v->visited = true;
    for (int x = 0; x < v->adj.size(); x++) {
        vertex* nb = v->adj[x].v;
        if (!nb->visited) {
            cout << nb->key << endl;
            depthFirstRecurse(nb);
        }
    }
}