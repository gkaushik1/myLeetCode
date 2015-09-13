class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int asciiMap[256] = {0};
        
        int count = 1,maxCount = 0;
        
        for(size_t i = 0; i < s.length(); ++i)
        {
            asciiMap[s[i]] = 1;
            count = 1;
            for(size_t j = i+1; j < s.length(); ++j)
            {
              if(asciiMap[s[j]] == 1)
              {
                 break;
              }
              else
              {
                count++;
                asciiMap[s[j]] = 1;
              }
            }
            
            for(size_t k =0; k < 256; ++k)
            {
                   asciiMap[k] = 0;
            }
            
            if(count > maxCount) maxCount = count;
        }
        
        return maxCount;
        
    }
};
