#include <stdio.h>
int main()
{
    char str[20];
    int i;
    gets(str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    printf("%s", str);
}
// 36. Modify the string
// Statement:create a program such that it accepts one string S of size N which contains alphabets, numbers and special characters. now convert all the upper-case characters

// into lower-case and lower-case character into upper-case character. Don't modify the numbers and special characters of string S.

// Don’t change the order of characters of string S.

// Input:first line containscontain string S of length N without space.

// Output:output contains the N length modified string.

// Constraints:10<=N<=20

// take the character array size as 20

// Example:

// ABCDefgh1@

// abcdEFGH1@