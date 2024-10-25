class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {


        int n = prerequisites.size() ;
       
       int count = 0 ;

        vector<int>indegree(numCourses , 0);

        vector<int>adj[numCourses] ;
        queue<int>q ; 

        for (auto &p : prerequisites) {



          int course = p[0];
          int prerequisite = p[1];
          adj[prerequisite].push_back(course);
          indegree[course]++;

}


         for(int i = 0 ; i < numCourses ; i++)
         {
            if(indegree[i] == 0)
            { 
                count++ ;
               q.push(i) ;
            }
         }

         while(!q.empty())
         {
            int u = q.front() ;
            q.pop() ;
            for( int &v : adj[u])
            { 

                indegree[v]-- ;
                if(indegree[v] == 0)
                {
                  q.push(v); 
                  count++ ;
                }
                
            }
         }
       
       if(count == numCourses)
       return true ;
       return false ; 
     
    }
};