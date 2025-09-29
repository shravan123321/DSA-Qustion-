//define the Graph DFS
#include<iostream>
#include<vector>
#include<stack>
#include<list>
using namespace std;

class Graph {
    int v;
    list<int>* l;
public:
    Graph(int);
    void addEdge(int, int);
    void DFS(int);
};

Graph::Graph(int v) {
    this->v = v;
    l = new list<int>[v];
}

void Graph::addEdge(int u, int v) {
    l[u].push_back(v);
    l[v].push_back(u); // undirected graph
}

void Graph::DFS(int start) {
    vector<bool> visited(v, false);
    stack<int> s;
    s.push(start);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            cout << node << " ";
            visited[node] = true;

            for (int nbr : l[node]) {
                if (!visited[nbr]) {
                    s.push(nbr);
                }
            }
        }
    }
}

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);

    cout << "DFS Traversal starting from node 0: ";
    g.DFS(0);

    return 0;
}