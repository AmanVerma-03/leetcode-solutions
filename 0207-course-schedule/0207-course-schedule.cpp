class Solution {

private : 

bool iscycleDFS(vector<int> adjl[] , vector<bool>& visi , vector<bool>& inRecur , int u)
{
    visi[u] = true ;
    inRecur[u] = true ;

    for(int &v : adjl[u])
    {
        // if the current node is not visited then we can 
     
      if (visi[v] == false && iscycleDFS(adjl,visi,inRecur,v))
        {
          return true ;
        }
      
      if (inRecur[v] == true)
      {
        return true ;
      }
      
        
    }
    inRecur[u] = false ;
      return false ;
}




public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<bool>visited(numCourses,false) ;
        
        vector<bool>inRecursion(numCourses,false);

        vector<int>adj[numCourses] ;

        for(const auto &p : prerequisites)
        {
            int course = p[0] ;
            int pre = p[1] ;

            adj[pre].push_back(course) ;
        }
         
         for(int i = 0 ; i < numCourses ; i++)
         {
            if(visited[i] == false && iscycleDFS(adj , visited , inRecursion , i))
            return false ;
         }
         return true ;

    }
};
