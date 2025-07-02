#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> nodes;
map<string, int> index_map;
vector<vector<int> > graph;

void add_edge(const string& a, const string& b) {
    int u = index_map[a];
    int v = index_map[b];
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int main() {
    nodes.push_back("Kyanka");
    nodes.push_back("Dava");
    nodes.push_back("Doni");
    nodes.push_back("Wildan");
    nodes.push_back("Haikal");
    nodes.push_back("Agus");
    nodes.push_back("Abrar");
    nodes.push_back("Azizah");
    nodes.push_back("Annisa");
    nodes.push_back("Jonathan");
    nodes.push_back("Rofii");
    nodes.push_back("Steven");
    nodes.push_back("Yunita");
    nodes.push_back("Nanda");
    nodes.push_back("Ale");
    nodes.push_back("Agung");
    nodes.push_back("Martin");
    nodes.push_back("Sudrajat");

    int n = (int)nodes.size();

    for (int i = 0; i < n; i++) {
        index_map[nodes[i]] = i;
    }

    graph.resize(n);

    add_edge("Kyanka", "Dava");
    add_edge("Kyanka", "Abrar");
    add_edge("Dava", "Azizah");
    add_edge("Dava", "Doni");
    add_edge("Abrar", "Steven");
    add_edge("Doni", "Annisa");
    add_edge("Doni", "Wildan");
    add_edge("Wildan", "Jonathan");
    add_edge("Wildan", "Haikal");
    add_edge("Haikal", "Rofii");
    add_edge("Agus", "Rofii");
    add_edge("Azizah", "Annisa");
    add_edge("Annisa", "Yunita");
    add_edge("Annisa", "Jonathan");
    add_edge("Jonathan", "Nanda");
    add_edge("Jonathan", "Rofii");
    add_edge("Rofii", "Agus");
    add_edge("Rofii", "Agung");
    add_edge("Nanda", "Ale");
    add_edge("Nanda", "Martin");
    add_edge("Ale", "Agung");
    add_edge("Agung", "Sudrajat");
    add_edge("Martin", "Sudrajat");

    string start_name = "Steven";
    string end_name = "Azizah";

    int start = index_map[start_name];
    int end = index_map[end_name];

    vector<bool> visited(n, false);
    vector<int> prev(n, -1);

    queue<int> q;
    q.push(start);
    visited[start] = true;

    bool found = false;
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == end) {
            found = true;
            break;
        }

        for (int i = 0; i < (int)graph[current].size(); i++) {
            int neighbor = graph[current][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                prev[neighbor] = current;
                q.push(neighbor);
            }
        }
    }

    if (found) {
        vector<string> path;
        for (int at = end; at != -1; at = prev[at]) {
            path.push_back(nodes[at]);
        }
        reverse(path.begin(), path.end());

        cout << "Jalur tercepat dari " << start_name << " ke " << end_name << ":" << endl;
        for (int i = 0; i < (int)path.size(); i++) {
            cout << path[i];
            if (i + 1 < (int)path.size()) cout << " -> ";
        }
        cout << endl;
        cout << "Total langkah (waktu): " << (int)path.size() - 1 << endl;
    } else {
        cout << "Tidak ada jalur yang tersedia" << endl;
    }

    return 0;
}
