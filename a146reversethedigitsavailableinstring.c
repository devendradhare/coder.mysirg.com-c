#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], l, i, j, tmp;
    gets(str);
    l = strlen(str);
    j = l;
    for (i = 0; i <= l; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            for (; j >= 0; j--)
            {
                if (str[j] >= '0' && str[j] <= '9')
                {
                    tmp = str[i];
                    str[i] = str[j];
                    str[j] = tmp;
                    j--;
                    break;
                }
            }
        }
        if (&str[i] >= &str[j])
            break;
    }
    printf("%s", str);
}

// 146. reverse the digits available in string.
// Statement: A string is a combination of characters and digits.

// Your task is to manipulate the string such that find all the digits available in string and place the digits in reverse order in same string.

// String can contain space.

// For example:

// 1)if String S is a1b2c3 then after modification string S should look like a3b2c1

// 2) if String S is abc73cd21vv5x3 then after modification S should look like abc35cd12vv3x7

// Input: contains a String S of size n

// Output: contains the modified String S of size n

// Constraint: 5<=n<=50

// Example

// Welcome 2021

// Welcome 1202