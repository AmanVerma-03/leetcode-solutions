class Solution {

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        // Create an adjacency list
        vector<int> adjls[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);  // Add both directions since it's an undirected graph
                }
            }
        }

        vector<int> vis(n, 0);  // To track visited cities
        int cnt = 0;  // Count of provinces

        // Iterate over each city
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {  // If the city is unvisited
                cnt++;  // Found a new province
                queue<int> q;
                q.push(i);
                vis[i] = 1;  // Mark the city as visited

                // Perform BFS
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    // Visit all neighbors of the current city (node)
                    for (auto it : adjls[node]) {
                        if (!vis[it]) {
                            vis[it] = 1;  // Mark as visited
                            q.push(it);  // Add the neighbor to the queue for further exploration
                        }
                    }
                }
            }
        }

        return cnt;  // Return the number of provinces (connected components)
    }
};
