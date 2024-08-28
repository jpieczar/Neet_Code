class Solution {
public:
    bool isValid(string s) {
        int i = 0;
        vector<char> track;

        if ((s.size() % 2) != 0)
        {
            return (false);
        }
        while (s[i])
        {
            if (s[i] == ')')
            {
                if ((i == 0) || (track.size() == 0) || (track.back() != '('))
                    return (false);
                track.pop_back();
            }
            else if (s[i] == '}')
            {
                if ((i == 0) || (track.size() == 0) || (track.back() != '{'))
                    return (false);
                track.pop_back();
            }
            else if (s[i] == ']')
            {
                if ((i == 0) || (track.size() == 0) || (track.back() != '['))
                    return (false);
                track.pop_back();
            }
            else
                track.push_back(s[i]);
            i++;
        }
        if (track.size() != 0)
            return (false);
        return (true);
    }
};

/*
Runtime
Details
0ms
Beats 100.00% of users with C++
Memory
Details
7.75mb
Beats 71.52% of users with C++
*/
