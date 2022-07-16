#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], ln;
    int i, j, k, l, m, pl = 0, count = 0;
    gets(str);
    ln = strlen(str);
    for (i = 1; i <= ln; i++)
    {
        for (j = 0; j <= ln - i; j++)
        {
            for (k = 0; k < j; k++)
            {
                for (l = k, m = 0; l < k + i; l++, m++)
                {
                    if (str[l] != str[j + m])
                    {
                        break;
                    }
                }
                if (l == k + i)
                {
                    count--;
                    pl--;
                    break;
                }
            }
            for (k = 0; k < i; k++) // se i aage
            {
                count++;
                pl++;
                for (l = j; l < j + k; l++)
                {
                    if (str[j + k] == str[l])
                    {
                        count--;
                        pl--;
                        break;
                    }
                }
            }
            pl = 0;
        }
    }
    printf("%d", count);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20], ln;
//     int i, j, k, l, m, pl = 0, count = 0;
//     gets(str);
//     ln = strlen(str);
//     for (i = 1; i <= ln; i++)
//     {
//         for (j = 0; j <= ln - i; j++)
//         {
//             for (k = 0; k < j; k++)
//             {
//                 for (l = k, m = 0; l < k + i; l++, m++)
//                 {
//                     if (str[l] != str[j + m])
//                     {
//                         break;
//                     }
//                 }
//                 if (l == k + i)
//                 {
//                     count--;
//                     pl--;
//                     break;
//                 }
//             }
//             for (k = 0; k < i; k++) // se i aage
//             {
//                 count++;
//                 pl++;
//                 for (l = j; l < j + k; l++)
//                 {
//                     if (str[j + k] == str[l])
//                     {
//                         count--;
//                         pl--;
//                         break;
//                     }
//                 }
//                 printf("%c", str[j + k]);
//             }
//             printf(" count+%d = %d\n", pl, count);
//             pl = 0;
//         }
//     }
// }
// 229. count unique characters in unique substrings
// Statement: accept a string s of length n.

// your task is to find all substrings of string s and find the total numbers of unique characters in formed substrings.

// For Example: suppose String s= "pqr"

// so unique substrings are "p" , "q" , "r", "pq", "qr" and "pqr" (note "pr" can't be a substring).

// so the total numbers of characters in all substrings are 10.

// suppose s= "mnm"so unique substrings are "m" "n" "mn" "nm" and "mnm"  but here substring  "mnm" have 1 repeated m character

// so "mnm" have only 2 unique characters.

// so the total numbers of unique characters in all substrings are 8.

// input: first line contains a String of length n;

// output: contains an integer denoting total number of characters in unique substrings.

// constraints: 3<=n<=10

// Example input:

// pqr

// Example output:

// 10
