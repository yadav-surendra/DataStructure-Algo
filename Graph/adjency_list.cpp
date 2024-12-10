
// Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
       vector<vector<int>> adjacencyList(V);

    // Populate the adjacency list
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;

        adjacencyList[u].push_back(v); // Add v to u's adjacency list
        adjacencyList[v].push_back(u); // Add u to v's adjacency list
    }

    return adjacencyList;
    
    }