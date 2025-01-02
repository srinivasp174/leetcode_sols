class Solution:
    def isPalindrome(self, s: str) -> bool:
        news = ''
        for c in s:
            if c.isalnum():
                news += c.lower()
        return news == news[::-1]        
