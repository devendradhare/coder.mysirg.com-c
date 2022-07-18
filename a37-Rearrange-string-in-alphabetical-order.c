#include <stdio.h>
#include <string.h>
int main()
{
    char str[25];
    int i, j, len, alf = 'A', temp;
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        for (alf = 'A'; alf <= 'Z'; alf++)
        {
            if (alf % 2 == 0)
            {
                for (j = i; j < len; j++)
                {
                    if (str[j] == alf + 32)
                    {
                        temp = str[j];
                        str[j] = str[i];
                        str[i] = temp;
                        i++;
                    }
                }
                for (j = i; j < len; j++)
                {
                    if (str[j] == alf)
                    {
                        temp = str[j];
                        str[j] = str[i];
                        str[i] = temp;
                        i++;
                    }
                }
            }
            else
            {
                for (j = i; j < len; j++)
                {
                    if (str[j] == alf)
                    {
                        temp = str[j];
                        str[j] = str[i];
                        str[i] = temp;
                        i++;
                    }
                }
                for (j = i; j < len; j++)
                {
                    if (str[j] == alf + 32)
                    {
                        temp = str[j];
                        str[j] = str[i];
                        str[i] = temp;
                        i++;
                    }
                }
            }
        }
    }
    printf("%s", str);
}
// Input:
//      WElcome
// Output:
//      ceElmoW
// Expected:
//      cEelmoW

// if(i%2==0)
// {
//     if (str[j]==aft)
//     {
//         temp = str[j];
//         str[j] = str[i];
//         str[i]== temp;
//         i++;
//     }
// }
// else
// {
//     if (str[j]==aft+32)
//     {
//         temp = str[j];
//         str[j] = str[i];
//         str[i]== temp;
//         i++;
//     }
// }

// 37. Rearrange string in alphabetical order
// Statement:create a program such that it accepts a string S of N characters. S should only contains upper and lower-case characters.

// Numbers and special case characters are not allowed in S.Now rearrange the string S in alphabetical order (a to z) .

// In order to modify the string S consider the following rule.

// Do not differentiate between lower-case and upper-case character of same alphabet and if both cases are available of same character preserve the order as of the

// original string.

// For example, if string S is “CxBdbazA” here alphabet “b” and “a” both present in upper case and lower case. but upper case “B” appears before lower case “b” and

// lower-case “a” appears before upper-case “A” so in modified string alphabet orders will be “aABbCdxz”.

// Input:first line contains string S of contains N characters without space.

// Output: output contains the rearranged string S.

// Constraints:5<=N<=25

// take character array size as 25 to store string.

// Example:

// Hello

// eHllo