
//optimal approach 

class Solution {
public:
    int maxProfit(vector<int>& v) {
        int min_cost=INT_MAX;
        int max_cost=INT_MIN;
        int ans=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
         
            min_cost=min(min_cost,v[i]);
            ans= max(ans,v[i]-min_cost);
        }

        return ans;
        
    }
};