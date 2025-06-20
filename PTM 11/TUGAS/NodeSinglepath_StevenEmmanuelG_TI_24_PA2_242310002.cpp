#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    int weight;
    string prev;
};

int main() {
    const int N = 4;
    Node path[N] = { {"A", 0, "-"}, {"B", 0, ""}, {"C", 0, ""}, {"D", 0, ""} };
    int weights[N-1] = {5, 3, 4};

    for (int i = 1; i < N; i++) {
        path[i].weight = path[i-1].weight + weights[i-1];
        path[i].prev = path[i-1].name;
    }

    cout << "Node\tBeban Minimal\tNode Sebelumnya\n";
    for (int i = 0; i < N; i++) {
        cout << path[i].name << "\t" << path[i].weight << "\t\t" << path[i].prev << "\n";
    }

    return 0;
}
