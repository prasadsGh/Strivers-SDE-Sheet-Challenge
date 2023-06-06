//brute force approach 

void setZeros(vector<vector<int>> &v)
{
	map<int,int>row, col;
	
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(v[i][j]==0)
			{
				row[i]++;
				col[j]++;
			}
		}
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(row.find(i)!=row.end() or col.find(j)!=col.end())
			{
				v[i][j]=0;
			}
			
		}
	}

}

//better approach 
class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
			vector<int> row(v.size(),0);
	vector<int> col(v[0].size(),0);


	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(v[i][j]==0)
			{
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(row[i]==1 or col[j]==1)
			{
				v[i][j]=0;
			}
			
		}
	}
        
    }
};

//optimal approach - in place 



