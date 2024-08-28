class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i = 0;
        int end = nums.size();

        sort(nums.begin(), nums.end());
        while (i < end - 1)
        {
            if (nums[i] == nums[i + 1])
                return (true);
            i++;
        }
        
        return (false);
    }
};

/*
Runtime
Details
90ms
Beats 65.07% of users with C++
Memory
Details
57.42mb
Beats 100.00% of users with C++
*/
