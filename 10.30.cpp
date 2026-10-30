#include <iostream>
using namespace std;

// Strongly Connected Graph:
// Every node is connected


// Breath First Search
struct vertex {
    string key;
    bool visited;
    vector<edge> adj;
};

struct edge {
    int weight: // unused in DFT
    vertex *v;
}

// Now the BFT algorithm
void Graph::breathFirstTraverse(keyStart) {
    vertex* vStart = search(keyStart);
    vStart->visited = true; vStart->distance = 0;
    queue<vertex> q;
    q.push(vStart);
    while (!q.empty()) {
        vertex* n = q.front(); q.pop();
        cout << n->key << " (" << n->distance << ")" << endl;
        for (int x = 0;  x < n->adj.size(); x++) {
            vertex* nb = n->adj[x].v;
            if (!nb.visited) {
                nb->visited = true;
                nb->distance = n->distance + 1;
                q.push(nb);
            }
        }
    }
}

// Depth FirstStack
void Graph::depthFirstStack(string key) {
    stack<vertex*> st;
    st.push(search(key));
    while (!st.empty()) {
        vertex* n = st.top(); st.pop();
        if (n->visited) continue; // pushed twice;
        n->visited = true;
        cout << n->key << endl;
        // push in reverse so adj[0] is popped first
        for (int x = n->adj.size() - 1; x >= 0; x--) {
            if (!n->adj[x].v->visited) {
                st.push(n->adj[x].v)
            }
        }
    }
}

// Breath First goes with queue's, Depth First goes with stacks