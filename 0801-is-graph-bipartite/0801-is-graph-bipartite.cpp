class Solution {

private: 

bool dfs(      vector<int> &color , int curr , vector<vector<int>> &adj )
{
    if(color[curr] == -1)
    color[curr] = 1 ;

    for(int &v : adj[curr])
    {
        if (color[v] == -1)
        {
            color[v] = 1 - color[curr];
            if( dfs(color , v , adj) == false)
            return false ;
        }
        else if(color[v] == color[curr])
        return false ;
    }
    return true ;
}

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size() ;
 
        vector<int>color(n,-1);
        for(int i = 0 ; i < n ; i++) // the main fuckking reason to do this is because we want to check if their is any disconnectd component so 
        {    // The graph may not be connected, meaning there may be two nodes u and v such that there 
        // is no path between them.
            if(color[i] == -1)
            {
                if(dfs(color, i ,graph) == false) // check for all the components of graph
                return false ;
            }
        }
        return true ;
    }
};