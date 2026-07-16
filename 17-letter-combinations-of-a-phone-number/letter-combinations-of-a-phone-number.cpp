class Solution {
public:
    // Mapping of digits to letters
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void backtrack(string& digits, int index, string current, vector<string>& result) {
        // Base case: if current string length matches input digits length
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        // Get letters for the current digit
        string letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            // Recurse with the next digit
            backtrack(digits, index + 1, current + c, result);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;
        backtrack(digits, 0, "", result);
        return result;
    }
};