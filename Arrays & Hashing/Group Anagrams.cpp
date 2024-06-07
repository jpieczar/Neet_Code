class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string hold;
        vector<string> index;
        vector<vector<string>> res;

        for (string i : strs)
        {
            hold = i;
            sort(hold.begin(), hold.end());
            for (int j = 0; j <= index.size(); j++)
            {
                if (j == index.size())
                {
                    index.push_back(hold);
                    res.push_back(vector<string> ());
                    res[j].push_back(i);
                    break;
                }
                if (hold == index[j])
                {
                    res[j].push_back(i);
                    break;
                }
            }
        }

        return (res);
    }
};

/*
Runtime
Details
221ms
Beats 5.04%of users with C++
Memory
Details
21.86MB
Beats 98.23%of users with C+++
*/
