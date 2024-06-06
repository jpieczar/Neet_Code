class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return (false);
        int i = 0;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        while(s[i])
        {
            if (s[i] != t[i])
                return (false);
            i++;
        }
        return (true);
    }
};

/*
Runtime
Details
7ms
Beats 76.31%of users with C++
Memory
Details
8.26mb
Beats 99.69%of users with C++
*/