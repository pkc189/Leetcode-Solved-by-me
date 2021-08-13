class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int most = candies[0];
        for (int i=1;i<candies.size();i++){
            if (candies[i]>most)most=candies[i];
}
        for (int i=0;i<candies.size();i++){
            if (most>candies[i]+extraCandies)ans.push_back(false);
            else ans.push_back(true);
        
    }
    return ans;
    }
};