#include <stdio.h>
int main()
{
    char str[35];
    int i;
    gets(str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 32)
        {
            if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
            {
                str[i - 1] -= 32;
            }
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
        }
        else if (str[i + 1] == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
    }
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }
    printf("%s", str);
}

// 38. Capitalize first and last letter of each word in string
// Statement:create a program such that it accepts a string S of N characters with space. That means S should contain M words where M>1 and string S can contain

// upper-case and lower-case characters only. Numbers and special characters are not allowed in S.

// Now rearrange the string S such that convert first and last character C(i) of each word W of string S into upper-case and finally print the manipulated string S.

// If the first and last letter of each word W is already in upper-case don’t make any change to them.

// If word contain a single letter change it to uppercase

// For example, if S is “a river” then manipulated S should be “A RiveR”.

// Input:first line consist String S of  N characters contains M words separated by space.

// Output: output contains manipulated string S.

// Constraints:5<=N<=35

// M>1

// take character array size as 35 to store string

// Example:

// Hello and welcome

// HellO AnD WelcomE