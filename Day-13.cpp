#include <iostream>
#include <string>
using namespace std;

void expandFromCenter(const string& s, int left, int right, int& start, int& maxLen) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        int len = right - left + 1;
        if (len > maxLen) {
            start = left;
            maxLen = len;
        }
        left--;
        right++;
    }
}

string longestPalindrome(string s) {
    int n = s.length();
    if (n <= 1) return s;

    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < n; ++i) {
        
        expandFromCenter(s, i, i, start, maxLen);
        
        expandFromCenter(s, i, i + 1, start, maxLen);
    }

    return s.substr(start, maxLen);
}

int main() {

    cout << longestPalindrome("babad") << endl; 
    cout << longestPalindrome("cbbd") << endl;  
    cout << longestPalindrome("a") << endl;     
    cout << longestPalindrome("aaaa") << endl;  
    cout << longestPalindrome("abc") << endl;    

    return 0;
}
