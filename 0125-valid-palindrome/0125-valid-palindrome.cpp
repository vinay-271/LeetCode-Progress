class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Corrected syntax using std::isalnum
            if (!std::isalnum(static_cast<unsigned char>(s[left]))) {
                left++;
            } 
            else if (!std::isalnum(static_cast<unsigned char>(s[right]))) {
                right--;
            } 
            // Compare characters ignoring case
            else if (std::tolower(static_cast<unsigned char>(s[left])) != 
                     std::tolower(static_cast<unsigned char>(s[right]))) {
                return false;
            } 
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};
