#include <iostream>

// 'using' declarations
using std::cout;
using std::endl;
using std::cin;

class Solution {
public:
    bool isPalindrome(int x) 
    {
        // This makes sure no number is negative since -#'s can't be palindromes
        if(x < 0)
        {
            cout << " is negative and therefore";
            return false;
        }
        // if the number is a single digit #, then it is a palindrome
        else if(x < 10)
        {
            return true;
        }
        else
        {
            long int revX = 0;
            int temp = x;

            while(x != 0)
            {
                revX = (revX * 10) + (x % 10);
                x = x/10;
            };
            // if the reverse of x (revX) and x (temp) = 0
            // Then returns true and if not then returns false
            return !(revX - temp);
        };
    };
};

