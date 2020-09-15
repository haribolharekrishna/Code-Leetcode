class Solution {
public:
    int dfs(int u,vector<int>adj[],vector<int>&visited,vector<int> &res)
    {
        visited[u]=1; //visited and in stack
        for(int i=0;i<adj[u].size();i++)
        {
            if(!visited[adj[u][i]] && dfs(adj[u][i],adj,visited,res))
                return 1;
            else if(visited[adj[u][i]]==1)
                return 1;
        }
        visited[u]=2; //visited but not in stack
        res.push_back(u);
        return 0;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> adj[numCourses];
        int n=prerequisites.size();
        for(int i=0;i<n;i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> res,res2;
        vector<int> visited(numCourses,0);
        int ans=0;
        for(int i=0;i<numCourses;i++){
            if(!visited[i])
                ans=dfs(i,adj,visited,res);
            if(ans==1)
            return res2;
        }        
        reverse(res.begin(),res.end());
        return res;
    }
};