#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int N = 8;
vector<pair<int, int>> graph[N];
int dist[N];

void dijkstra(int start) {
    for (int i = 0; i < N; i++) dist[i] = INT_MAX;
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        for (auto e : graph[u]) {
            int v = e.first, w = e.second;
            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i < N; i++)
        cout << "Jarak dari 1 ke " << i << " = " << dist[i] << endl;
}

int main() {

    graph[1].push_back({6,14});
    graph[6].push_back({1,14});

    graph[1].push_back({7,7});
    graph[7].push_back({1,7});

    graph[2].push_back({4,15});
    graph[4].push_back({2,15});

    graph[2].push_back({3,10});
    graph[3].push_back({2,10});

    graph[3].push_back({4,11});
    graph[4].push_back({3,11});

    graph[3].push_back({6,9});
    graph[6].push_back({3,9});

    graph[4].push_back({5,6});
    graph[5].push_back({4,6});

    graph[6].push_back({5,5});
    graph[5].push_back({6,5});

    dijkstra(1);
    return 0;
}

