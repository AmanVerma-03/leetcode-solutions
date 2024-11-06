class Solution {

private:
    int countSetBits(int n) {
        // base case
        if (n == 0)
            return 0;
        else
            // if last bit set add 1 else add 0
            return (n & 1) + countSetBits(n >> 1);
    }

public:
 bool canSortArray(vector<int>& nums) 
    {
        int n = nums.size(), flag = true;
        while(flag)
        {
            flag = false;
            for(int i=0;i<n-1;i++)
            {
                if(nums[i] > nums[i+1])
                {
                    if(countSetBits(nums[i]) == countSetBits(nums[i+1]))
                    {
                        swap(nums[i], nums[i+1]);
                        flag = true;
                    }
                }
            }
        }
        return is_sorted(nums.begin(), nums.end());
    }


    
};