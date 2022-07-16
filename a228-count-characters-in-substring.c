#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], ln;
    int i, j, k, l, m, count = 0;
    gets(str);
    ln = strlen(str);
    for (i = 1; i <= ln; i++)
    {
        for (j = 0; j <= ln - i; j++)
        {
            for (k = 0; k < j; k++)
            {
                for (l = k; l < k + i; l++)
                {
                    if (str[l] != str[j + k])
                    {
                        break;
                    }
                }
                if (l == k + i)
                {
                    count--;
                }
            }

            for (k = 0; k < i; k++) // se i aage
            {
                count++;
            }
        }
    }
    printf("%d", count);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20], ln;
//     int i, j, k, l, m,count = 0;
//     gets(str);
//     ln = strlen(str);
//     printf("\n%d\n", ln);
//     for (i = 1; i <= ln; i++)
//     {
//         for (j = 0; j <= ln - i; j++)
//         {
//             for (k = 0; k < j; k++)
//             {
//                 for (l = k; l < k + i; l++)
//                 {
//                     if(str[l]!=str[j+k])
//                     {
//                         break;
//                     }
//                 }
//                 if(l == k+i)
//                 {
//                     count--;
//                 }
//             }

//             for (k = 0; k < i; k++) // se i aage
//             {
//                 printf("%c", str[j + k]);
//                 count++;
//             }
//             printf(" count = %d\n",count);
//         }
//     }
// }

// 228. count characters in substring
// Statement: accept a string s of length n.

// your task is to find all substrings of string s and find the total numbers of characters in formed substrings.

// For Example: suppose String s= "pqr"

// so unique substrings are "p" , "q" , "r", "pq", "qr" and "pqr" (note "pr" can't be a substring).

// so the total numbers of characters in all substrings are 10.

// suppose s= "mnm"so unique substrings are "m" "n" "mn" "nm" and "mnm" .

// so the total numbers of characters in all substrings are 9.

// input: first line contains a String of length n;

// output: contains an integer denoting total number of characters in unique substrings.

// constraints: 3<=n<=10

// Example input:

// pqr

// Example output:

// 10