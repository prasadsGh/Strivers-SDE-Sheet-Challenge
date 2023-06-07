//brute force approach 
class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int n=v.size();
        vector<int>p(n);
        for(int i=0;i<n;i++)
        {
            p[i]=v[i];
            if(i) p[i]+=p[i-1];
        }
        int maximum_sum=p[0];
        int minimum_sum=0;

        for(int i=0;i<n;i++)
        {
            maximum_sum=max(maximum_sum, p[i]-minimum_sum);
            minimum_sum=min(minimum_sum,p[i]);
        }

        return maximum_sum;
        
    }
};

//optimal approach 

class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int n=v.size();
        int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            ans=max(ans,sum);
            if(sum<0) sum=0;
        }
        return ans;
        
    }
};