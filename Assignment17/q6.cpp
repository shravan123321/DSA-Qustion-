 // graph Traversals BFS
#include<iostream>
#include<list>
#include<queue>
#include<vector>
using namespace std;

class Graph {
    int v;
    list<int>* adj;
public:
    Graph(int v) {
        this->v = v;
        adj = new list<int>[v];
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected graph
    }

    void BFS(int start) {
        vector<bool> visited(v, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int nbr : adj[node]) {
                if (!visited[nbr]) {
                    visited[nbr] = true;
                    q.push(nbr);
                }
            }
        }
    }
};

int main() {
    Graph g(6);  
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);

    cout << "BFS Traversal starting from node 0: ";
    g.BFS(0);

    return 0;
}