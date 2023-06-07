//better approach 

/*

if you want to find the element in nth row 
and rth column --> use nCr formula 
where 

n = number of row-1;
r= number of column -1;

*/

//brute force implementation 

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v(n);
        v[0].push_back(1);
        if(n==1) return v;
        v[1].push_back(1);
        v[1].push_back(1);
        if(n==2) return v;

        for(int i=2;i<n;i++)
        {
           
            int m= i+1;
            for(int j=0;j<m;j++)
            {
                if(j==0 or j==(m-1))
                {
                    v[i].push_back(1);
                }
                else
                {
                    v[i].push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            

        }

        return v;

        
    }
};