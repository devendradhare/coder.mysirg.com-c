#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    int i, j;
    gets(str1);
    gets(str2);
    if (strlen(str1) == strlen(str2))
    {
        for (i = 0; str1[i]; i++)
        {
            for (j = 0; str2[j]; j++)
            {
                if (str2[j] == str1[i])
                {
                    break;
                }
            }
            if (j == strlen(str2))
            {
                printf("0");
                break;
            }
        }
        if (i == strlen(str2))
        {
            printf("1");
        }
    }
    else
    {
        printf("0");
    }
}

// 39. Anagram strings
// Statement:An anagram of a string S is another string T that contains the same characters, only the order of characters can be different. For example, “abcd” and “dabc”

// are an anagram of each other.

// Your task is to accepts two strings S and T that contains same number of characters andS and T should contain lower case characters only.

// S and T should not contain any uppers-case letter, number or any special character.

// Write a program such that it accepts String S and T  and check whether S and T are anagram of each other or not. if they are anagram of each other print 1 and if they are not, print 0.

// Input:first line contains String S contains N  characters in lower-case letters.

// Second line contains String T contains  N characters in lower-case letters

// Output:output contain either 1 or 0 if S and T are anagram of each other print 1.IfS and T are not anagram of each other print 0.

// Constraints:1<=N<=20

// 1<=T<=20

// N=T

// take character arrays size as 20 to store string S and T.

// Example:

// abcd

// badc

// 1