
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {

        // Min-heap: {weight, node}
        priority_queue<pair<int,int>, 
                       vector<pair<int,int>>, 
                       greater<pair<int,int>>> pq;

        vector<int> vis(V, 0);

        pq.push({0, 0});   // start with node 0 with weight 0
        int sum = 0;

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            int wt = it.first;
            int node = it.second;

            if (vis[node] == 1) continue;

            // include this node in MST
            vis[node] = 1;
            sum += wt;

            // push all edges from this node
            for (auto it2 : adj[node]) {
                int adjNode = it2[0];
                int edW = it2[1];

                if (!vis[adjNode]) {
                    pq.push({edW, adjNode});
                }
            }
        }

        return sum;
    }
};

int main() {
    int V = 5;

    // Graph using adjacency list: adj[u] = { {v,weight}, ... }
    vector<vector<int>> adj[V];

    // Example graph (undirected)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});

    adj[1].push_back({3, 8});
    adj[3].push_back({1, 8});

    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});

    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    Solution s;
    cout << "MST Weight = " << s.spanningTree(V, adj) << endl;

    return 0;
}
