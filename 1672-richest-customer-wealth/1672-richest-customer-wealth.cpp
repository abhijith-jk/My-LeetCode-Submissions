class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0, wealth;
        for(int i = 0; i<accounts.size();i++){
            wealth = 0;
            for(int j = 0; j<accounts[i].size(); j++){
                wealth += accounts[i][j];
            }
            if (max_wealth < wealth)
                max_wealth = wealth;
        }
        return max_wealth;
    }
};