// Pop the Heap elements 
#include<iostream>
#include<vector>
using namespace std;
class Heap {
private:
    vector<int> vac;

    // Bubble down to maintain heap after pop
    void heapify(int i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int maxIdx = i;

        if (left < vac.size() && vac[left] > vac[maxIdx]) {
            maxIdx = left;
        }
        if (right < vac.size() && vac[right] > vac[maxIdx]) {
            maxIdx = right;
        }

        if (maxIdx != i) {
            swap(vac[i], vac[maxIdx]);
            heapify(maxIdx);
        }
    }

public:
    void push(int val) {
        vac.push_back(val);
        int x = vac.size() - 1;
        int parI = (x - 1) / 2;

        while (x > 0 && vac[x] > vac[parI]) {
            swap(vac[x], vac[parI]);
            x = parI;
            parI = (x - 1) / 2;
        }
    }

    void pop() {
        if (vac.empty()) return;

        swap(vac[0], vac[vac.size() - 1]);
        vac.pop_back();
        heapify(0);
    }

    int top() {
        if (!vac.empty()) return vac[0];
        throw runtime_error("Heap is empty");
    }

    bool empty() {
        return vac.empty();
    }

    void print() {
        cout << "Heap elements (array form): ";
        for (int val : vac) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap hp;
    hp.push(20);
    hp.push(30);
    hp.push(10);
    hp.push(50);

    cout << "Top before pop: " << hp.top() << endl;
    hp.print();

    hp.pop();
    cout << "Top after pop: " << hp.top() << endl;
    hp.print();

    return 0;
}