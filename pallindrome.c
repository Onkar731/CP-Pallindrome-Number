/*
    Given an integer x , return true if x is palindrome integer.
    An integer is a palindrome when it reads the same backward as forward.
    For example, 121 is a palindrome while 123 is not.

    Example 1:

    Input: x = 121
    Output: true
    Explanation: 121 reads as 121 from left to right and from right to left.

    Example 2:

    Input: x = -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it becomes 121-. There
    fore it is not a palindrome.

    Example 3:

    Input: x = 10
    Output: false
    Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

    Constraints:    -231 <= x <= 231 - 1

*/

#include<stdio.h>

int checkPallindrome(int);

int main()
{

    int num;
    scanf("%d", &num);

    // calling checkPallindrome to check whether the given number is pallindrome number or not
    // checkPallindrome returns 1 if the given number is pallindrome number otherwise it returns 0

    if(checkPallindrome(num))
        printf("true");
    else
        printf("false");

    return 0;
}

int checkPallindrome(int n)
{
    long pallindrome = 0;
    int temp = n;

    if(n >= 0)
    {
        while(n)
        {
            pallindrome = pallindrome * 10 + n % 10;
            if(pallindrome < 0)
                return 0;
            n /= 10;
        }

        if(temp == pallindrome)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}