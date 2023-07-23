#include <bits/stdc++.h> 
int minSumPath(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> prev(m,0);
    for(int i=0;i<n;i++){
       int cur;
       int curprev;
        for(int j=0;j<m;j++){
            if(i==0 && j==0) cur = grid[i][j];
            else{ int up = grid[i][j], left=grid[i][j];
                if(i>0) up += prev[j];
                else up = 1e8;
                if(j>0) left += curprev;
                else left = 1e8;
                cur = min(up,left);
            }
            curprev = cur;
            prev[j] =cur;
        }
    }
    return prev[m-1];
}
