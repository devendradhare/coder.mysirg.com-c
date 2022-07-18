#include <stdio.h>
#include <string.h>
int main()
{
    char str[2][20];
    int i, j, len;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 20; j++)
        {
            str[i][j] = 0;
        }
    }
    gets(&str[0][0]);
    len = strlen(&str[0][0]);
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (str[0][j] == str[0][i])
            {
                str[1][i]++;
            }
        }
    }
    j = 0;
    for(i = 0;i < len;i++)
    {
        if (str[1][i]>j)
        {
            j = str[1][i];
        }
    }
    for(i = 0;i < len;i++)
    {
        if (str[1][i]==j)
        {
            printf("%c %d\n",str[0][i],str[1][i]);
        }
    }
}

// 40. Find most repeated character in string
// Statement:In this program your task is to accept a string S of N characters without space. The S can contain mix cases of alphabets, numbers and special characters.

// write a program such that it finds the most repeated character C in string S and print that character C along with its frequency F.

// If more than one character you find as most repeated character C(i) print all of them along with their frequencies F(i) each in new line.

// In order to print multiple most repeated characters C(i) in output follow the same sequence as they appear in S.

// For example, in String “AbbcDeef” most repeated characters are C(1)= b and C(2)=e but in string “b” appears before “e” so output should be like

// b 2

// e 2

// Consider the upper-case and lower-case of same alphabet as different character.

// For example: in string “AbBb” most repeated character is b with frequency 2.

// Input:first line contains S denoting a string of N characters (S can containmix cases of alphabets, numbers and special characters)

// Output:each new line contains C(i) F(i) separated by space denoting repeated character along with its frequency.

// Constraints:1<=N<=20

// 1<=F<=N

// take character array of size 20 to contain N characters.

// Example:

// india123

// i 2