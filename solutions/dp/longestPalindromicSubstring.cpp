
// Normal Expand around center approach

class Solution {
public:
    string longestPalindrome(string s) {

        // Odd Chars
        int n  = s.length();
        if(n==0) return "";
        string ans = "";
        for(int i = 0; i < n ; i++){
            int j = 0; 
            while(i-j>=0 && i+j< n){
                if(s[i-j]==s[i+j]){
                    if(ans.length()<(2*j+1)){
                        ans = s.substr(i-j, (2*j+1));
                    }
                    j++;
                }else{
                    break;
                }
            }
        }

        for(int i = 0; i < n-1 ; i++){
            int j = 0; 
            while(i-j>=0 && i+j< n){
                if(s[i-j]==s[i+1+j]){
                    if(ans.length()<(2*j +2)){
                        ans = s.substr(i-j, (2*j+2));
                    }
                    j++;
                }else{
                    break;
                }
            }
        }
        return ans;  
    }
};

/*___________________________________________________________________________________________*/

/* 
Instead of expanding outward from a center, Dynamic Programming (DP) builds the solution from the bottom up by looking at smaller sub-problems.

The core idea is: A string s[i...j] is a palindrome if and only if:

The first and last characters match (s[i] == s[j]).

The inner substring s[i+1...j-1] is also a palindrome.

How it works:
We create a 2D boolean table dp[i][j] where dp[i][j] is true if s[i...j] is a palindrome, and false otherwise.

*/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n<=1) return s;

        vector<vector<bool>> dp(n, vector<bool>(n,false));
        int start = 0, maxLen = 1 ;

        for(int i = 0 ; i<n;  i++) dp[i][i]=true;

        for(int i = 0; i <n-1; i++){
                if(s[i]==s[i+1]){
                dp[i][i+1] = true; 
                start = i ; 
                maxLen = 2;        
                 }
        }

        for(int len = 3; len <=n; len++){
            for(int i = 0 ; i <=n-len; i++){
                int j = i + len -1 ; // End Index

                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j] =true;
                    if(len>maxLen){
                        start = i; 
                        maxLen = len;
                    }
                  
                }
            }
        }


        return s.substr(start , maxLen);
    }
};


/*
Time Complexity: $O(n^2)
$Space Complexity: $O(n^2)$ (due to the 2D table). 
Because of the extra space, this is actually less optimal than your original 
"Expand Around Center" approach, which uses $O(1)$ extra space.

*/

/*___________________________________________________________________________________________*/


/*
Manacher's Algorithm (The Ultimate Optimization)
1. It first modifies the string by inserting a special character (like #) between every character (e.g., "aba" becomes "#a#b#a#"). 
2. This cleverly merges odd and even palindrome logic into one.
3. It keeps track of an array P[i], which stores the radius of the longest palindrome centered at index i.
4. It uses a "mirror" property to fill out P[i] in $O(1)$ time for most elements.
    
*/

