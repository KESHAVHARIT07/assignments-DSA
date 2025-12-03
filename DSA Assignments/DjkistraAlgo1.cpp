
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the shortest distance of all vertices from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {

        // Min-heap: {distance, node}
        priority_queue<pair<int,int>, 
                       vector<pair<int,int>>, 
                       greater<pair<int,int>>> pq;

        vector<int> dist(V);

        // Initialize all distances as INF
        for (int i = 0; i < V; i++)
            dist[i] = 1e9;

        // Source vertex distance = 0
        dist[S] = 0;
        pq.push({0, S});

        while (!pq.empty()) {
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Explore all adjacent nodes
            for (auto it : adj[node]) {
                int edgeWeight = it[1];
                int adjNode = it[0];

                if (dis + edgeWeight < dist[adjNode]) {
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }

        return dist;
    }
};

int main() {
    int V = 5;
    
    // adjacency list: adj[u] = { {v, weight}, ... }
    vector<vector<int>> adj[V];

    // Example graph (undirected or directed)
    adj[0].push_back({1, 2});
    adj[0].push_back({2, 4});
    adj[1].push_back({2, 1});
    adj[1].push_back({3, 7});
    adj[2].push_back({4, 3});
    adj[3].push_back({4, 1});

    Solution s;
    vector<int> ans = s.dijkstra(V, adj, 0);

    cout << "Shortest distances from node 0:\n";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
