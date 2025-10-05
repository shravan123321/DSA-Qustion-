// Heap push  (min Heap)
#include<iostream>
#include<vector>
using namespace std;

class Heap {
private:
    vector<int> vac;

public:
    void push(int);
    void print();
    int top();
    bool empty();
};

void Heap::push(int val) {
    vac.push_back(val);
    int x = vac.size() - 1;
    int parI = (x - 1) / 2;

    while (x > 0 && vac[x] < vac[parI]) {
        swap(vac[x], vac[parI]);
        x = parI;
        parI = (x - 1) / 2;
    }
}

void Heap::print() {
    for(int value : vac){
        cout<<value<<" ";
    }
    cout<<endl;
}

int Heap::top() {
    if (!vac.empty()) return vac[0];
    throw runtime_error("Heap is empty");
}

bool Heap::empty() {
    return vac.empty();
}

int main() {
    Heap hp;
    hp.push(20);
    hp.push(30);  // Fixed typo
    hp.push(10);
    hp.push(50);

      cout << "top: " << hp.top();  // Should print 50
      cout<<endl;
      hp.print();
    return 0;
}