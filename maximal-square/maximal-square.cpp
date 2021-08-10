class Solution {
public:
    int maximalSquare(vector<vector<char>>& m) {
        int row = m.size();
        int col = m[0].size();
        
        if (m.empty()) {
            return 0;
        }
        
      vector<vector<int>>dp(row,vector<int>(col,0));
        int sz=0;
   
        
        
        for(int i =0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
                if(!i || !j || m[i][j]=='0')
                {
                   dp[i][j] = m[i][j]-'0';
                }
                else
                {
                   dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
                
                sz = max(sz,dp[i][j]);
            }
        }
        
        
        return sz*sz;
        
        
    }
};