#include <iostream>
using namespace std;

/*
Each vertex holds a key and a list of its edges: its adjacency list.
You can model it by showing the nodes and their connections or using a graph

Directed or.undirected, weighted or unweighted
- Undirected, Unweighted:
simple lines connected the graph nodes

Directed, Unweighted:
arrows show the direction of the edges

- Undirected, Weighted:
lines have weights associated with them,

*/

// in class graph
private:
    vector<vertex*> vertices;

struct vertex {
    string key;
    vector<edge*> edges;
};

struct edge {
    vertex* v; // The other end
    int weight;
};


vector<int> v1(5); // size 5, all 0
v1[2] = 3; // valid indexesL 0 to 4
v1.push_back(9); // grows size is now 6, adds 9 to the end
cout << v1.size() << endl; // 6
if (v1.empty()) ...

struct myStruct {int numbers; string words; };
vector<myStruct> vs; // empty
myStruct t;
t.numbers = 12;
vs.push_back(t); // not vs[0].numbers = 12


void Graph::insertVertex(string n) {
    // 1. search: is the key already here?
    bool found = false;
    for (int i = 0; i < vertices.size(); i++) {
        if (vertices[i]->key == n) {
            found = true;
        }
    }
    // 2. create the vertex, no edges yet
    if (!found) {
        vertex* v = new vertex;
        v->key = n;
        vertices.push_back(v);
    }
 }

void Graph::addEdge(string v1, string v2, int weight) {
    for (int i = 0; i < vertices.size(); i++) {
        if (vertices[i]->key == v1) {
            for (int j = 0; j < vertices.size(); j++) {
                if (vertices[j]->key == v2 && i != j) {
                    edge e0;
                    e0.v = vertices[j];
                    e0.weight = weight;
                    vertices[j]->adj.push_back(e0);
                    // Add the edge in the other direction
                    edge e1;
                    e1.v = vertices[i];
                    e1.weight = weight;
                    vertices[j]->adj.push_back(e1);
                }
            }
        }
    }
}