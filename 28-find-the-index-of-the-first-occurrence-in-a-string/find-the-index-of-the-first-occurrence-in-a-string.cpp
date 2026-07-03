class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        int x = 0;

        for(int i = 0; i <= n - m; i++)
        {
            for(int j = i; j < i + m; j++)
            {
                if(haystack[j] != needle[x])
                {
                    break;
                }
                x++;
            }

            if(x == m)
            {
                return i;
            }

            x = 0;
        }

        return -1;
    }
};