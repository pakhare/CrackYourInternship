class Solution {
public:
    // bool checkPalindrome(string s){
    //     for(int i=0; i<s.length()/2; i++){
    //         if(s[i]!=s[s.length()-1-i])
    //           return false;
    //     }
    //     return true;
    // }
    // bool validPalindrome(string s) {
    //     string str = s;
    //     if (checkPalindrome(str)) return true;
    //     for(int i=0; i<s.length(); i++){
    //         str = s;
    //         str.erase(str.begin() + i);
    //         if (checkPalindrome(str)) return true;
    //     }
    //     return false;
    // }
    

    bool checkPalindrome(string& s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        
        while (start < end) {
            if (s[start] != s[end]) {
                // Try skipping either start or end character to check if remaining is a palindrome
                return checkPalindrome(s, start + 1, end) || checkPalindrome(s, start, end - 1);
            }
            start++;
            end--;
        }
        
        return true; // The whole string is a palindrome
    }
};

