#include <bits/stdc++.h>
using namespace std;

#define edge pair<int, pair<int, int>>  // (weight, (u, v))

class DSU {
    vector<int> parent, rank;

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i; // Initially, every node is its own parent
    }

    int find(int x) { // Find with path compression
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    bool unionSets(int x, int y) { // Union by rank
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY)
            return false;
        if (rank[rootX] > rank[rootY])
            parent[rootY] = rootX;
        else if (rank[rootX] < rank[rootY])
            parent[rootX] = rootY;
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }
};

int kruskalMST(int V, vector<edge> &edges) {
    sort(edges.begin(), edges.end()); // Sort edges by weight
    DSU dsu(V);
    int minCost = 0, edgesUsed = 0;

    for (auto &[w, uv] : edges) {
        int u = uv.first, v = uv.second;
        if (dsu.unionSets(u, v)) { // Check if adding this edge forms a cycle
            cout << "Edge: " << u << " - " << v << " | Weight: " << w << "\n";
            minCost += w;
            edgesUsed++;
            if (edgesUsed == V - 1)
                break;
        }
    }
    return minCost;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;
    vector<edge> edges;

    cout << "Enter edges (u, v, weight):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, {u, v}});
    }

    int minCost = kruskalMST(V, edges);
    cout << "Minimum Cost of Spanning Tree: " << minCost << endl;
    return 0;
}
