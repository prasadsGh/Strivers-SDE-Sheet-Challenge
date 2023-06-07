// we can use stl function 

vector<int> ans= next_permutation(v.begin(),v.end());
return ans;

// optimal approach 
class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int n=v.size();
        int idx=-1;
        for(int i=n-1;i-1>=0;i--)
        {
            if(v[i-1]<v[i])
            {
                idx=(i-1);
                break;
            }
        }

        if(idx==-1)
        {
            sort(v.begin(),v.end());
            return;
        }

        for(int i=(n-1);i>=0;i--)
        {
            if(v[i]>v[idx])
            {
                swap(v[i],v[idx]);
                break;
            }
        }

        sort(v.begin()+idx+1,v.end());

        
        
    }
};