// graph traversals 
#include<iostream>
#include<list>
using namespace std;

class Graph {
    int v;
    list<pair<int, int>>* l;
public:
    Graph(int v) {
        this->v = v;
        l = new list<pair<int, int>>[v];
    }

    void addEdge(int u, int v, int wt) {
        l[u].push_back({v, wt});
        l[v].push_back({u, wt}); // undirected
    }

    void print() {
        for (int i = 0; i < v; i++) {
            cout << i << " -> ";
            for (auto p : l[i]) {
                cout << "(" << p.first << ", " << p.second << ") ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1, 5);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 3);
    g.addEdge(3, 2, 1);
    g.addEdge(2, 4, 2);
    g.print();
    return 0;
}