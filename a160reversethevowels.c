#include <stdio.h>
#include <string.h>
int aeiou(char a);
int main()
{
    char str[50], l, i, j, tmp;
    gets(str);
    l = strlen(str);
    j = l;
    for (i = 0; i <= l; i++)
    {
        if (aeiou(str[i]))
        {
            for (; j >= 0; j--)
            {
                if (aeiou(str[j]))
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
int aeiou(char a)
{
    switch (a)
    {
    case 'a':
        return 1;
    case 'e':
        return 1;
    case 'i':
        return 1;
    case 'o':
        return 1;
    case 'u':
        return 1;
    default:
        return 0;
    }
}

// 160. reverse the vowels
// Statement: A string is a combination of characters that can be vowel or consonants.

// Your task is to manipulate the string such that find all the vowels available in string and place the vowels in reverse order in same string.

// String can contain space.

// For example:

// 1)if String S is abcdefghi then after modification string S should look like ibcdefgha

// 2) if String S is aeiou then after modification S should look like uoiea

// Input: contains a String S of size n

// Output: contains the modified String S of size n

// Constraint: 5<=n<=50

// Example

// abcdeiou

// ubcdoiea