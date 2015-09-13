// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool firstSpace = true;
        for(int i = s.size() - 1; i >= 0; --i)
        {
            if(s[i] == ' ' && !firstSpace)
            {
                break;
            }
            else if(s[i] != ' ')
            {
                firstSpace = false;
                length++;
            }
        }
        return length;
    }
};
