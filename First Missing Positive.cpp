class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int c=1;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==c)
            {
                c++;
            }
        }
        return c;
    }
    
    //cout<<"pls upvote  if it was helpful "<<endl;
    
};
