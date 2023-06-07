//dutsche national flag algorithm 

class Solution {
public:
    void sortColors(vector<int>& v) {
        //dutche national flag algorithm

       
        int n=v.size();
         int i=0,j=0,k=n-1;
        while(j<=k)
        {
            if(v[j]==0)
            {
                swap(v[i],v[j]);
                i++;
                j++;
            }
            else if(v[j]==2)
            {
                swap(v[j],v[k]);
                k--;
            }
            else j++;
        }

    }
};