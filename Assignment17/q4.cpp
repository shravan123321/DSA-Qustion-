// create the graph 
#include<iostream>
#include<list>
using namespace std;
 
class Graph{
    private:
      int v;
      list<int> * l;
    public:
      Graph(int v){
        this->v=v;
        l=new list<int> [v];
      }
      void adEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
      }
      void print();
};

void Graph::print() {
    for (int u = 0; u < v; u++) {
        cout << u << " -> ";
        for (int nbr : l[u]) {
            cout << nbr << " ";
        }
        cout << endl;
    }
}
int main(){
    Graph graph(5);
    graph.adEdge(0,1);
    graph.adEdge(1,2);
    graph.adEdge(1,3);
    graph.adEdge(2,3);
    graph.adEdge(2,4);
    cout<<"graph vertex: ";
    graph.print();
  return 0;
}