//q1 define a metrix to print graph matrix
#include<iostream>
using namespace std;

class graphmatrix {
private:
    int v_count;
    int e_count;
    int **adj;

public:
    void creategraph(int, int);
    void printmatrix();
    ~graphmatrix(); // destructor to free memory
};

void graphmatrix::creategraph(int vno, int eno) {
    int u, v;
    v_count = vno;
    e_count = eno;

    // allocate memory for adjacency matrix
    adj = new int*[v_count];
    for (int i = 0; i < v_count; i++)
        adj[i] = new int[v_count];

    // initialize with 0
    for (int i = 0; i < v_count; i++) {
        for (int j = 0; j < v_count; j++)
            adj[i][j] = 0;
    }

    // input edges
    for (int k = 0; k < e_count; k++) {
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        if (u >= 0 && u < v_count && v >= 0 && v < v_count) {
            adj[u][v] = 1;
            adj[v][u] = 1; // undirected graph
        } else {
            cout << "Invalid edge! Try again.\n";
            k--; // retry this edge
        }
    }
}

void graphmatrix::printmatrix() {
    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < v_count; i++) {
        for (int j = 0; j < v_count; j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
}

graphmatrix::~graphmatrix() {
    for (int i = 0; i < v_count; i++)
        delete[] adj[i];
    delete[] adj;
}

int main() {
    graphmatrix g;
    int v, e;
    cout << "Enter number of vertices: ";
    cin >> v;
    cout << "Enter number of edges: ";
    cin >> e;

    g.creategraph(v, e);
    g.printmatrix();

    return 0;
}
