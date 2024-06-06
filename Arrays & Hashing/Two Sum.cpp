class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int i = 0;
        int j = 0;
        int end = nums.size();

        while (i < (end - 1))
        {
            j = i + 1;
            while(j < end)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return (res);
                }
                j++;
            }
            i++;
        }
        return (res);
    }
};

/*
Runtime
Details
97ms
Beats 18.79%of users with C++
Memory
Details
12.58MB
Beats 93.07%of users with C++
*/