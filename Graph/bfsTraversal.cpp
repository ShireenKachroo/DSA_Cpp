vector<int> bfsOfGraph(vector<vector<int>> &adj) {  //SC:O(N)  and TC:O(N)+O(2*E)
        // Code here
        int vis[adj.size()] = {0};
        vis[0] = 1;
        queue<int>q;
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
