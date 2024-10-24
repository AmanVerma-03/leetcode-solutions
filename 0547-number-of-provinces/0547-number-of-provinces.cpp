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

      queue<int>q ;
      for(int i = 0 ; i < n ; i++)
    {
         if (vis[i]==false)
         {
            cnt++ ;
            q.push(i);
            vis[i] = true ;
         }
         while(!q.empty())
         {
            int u = q.front() ;
            q.pop() ;

            for(int &v : adjls[u])
            {
                if(vis[v] == false)
                {
                    q.push(v);
                    vis[v] = true ;
                }
            }
         }
    }

        return cnt;  // Return the number of provinces (connected components)
    }
};
