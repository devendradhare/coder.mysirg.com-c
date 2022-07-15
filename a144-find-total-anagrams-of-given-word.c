#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[20];
    int i, j, k, wld_ln, str_wr_ln = 0, befor = 0, anagrams = 0;
    gets(str);
    gets(word);
    wld_ln = strlen(word);
    for (i = 0; str[i]; i++)
    {
        if (str[i] != 32)
        {
            if (str_wr_ln == wld_ln - 1 && (str[i + 1] == 32||str[i+1]== 0))
            {
                str_wr_ln = -1;
                for (j = i; j >= befor; j--)
                {
                    for (k = 0; k <= wld_ln - 1; k++)
                    {
                        if (word[k] == str[j])
                            break;
                    }
                    if (k == wld_ln)
                        break;
                }
                if (j == befor - 1)
                    anagrams++;
            }
            if(str[i+1]==32)
            {
                befor = i+2;
                str_wr_ln = -1;
            }
            str_wr_ln++;
        }
    }
    printf("%d",anagrams);
}
// #include <stdio.h>
// #include <string.h>
// #include <conio.h>
// int main()
// {
//     char str[100], word[20];
//     int i, j, k, wld_ln, str_wr_ln = 0, befor = 0, anagrams = 0;
//     gets(str);
//     gets(word);
//     wld_ln = strlen(word);
//     printf("\n%d", wld_ln);
//     for (i = 0; str[i]; i++)
//     {
//         if (str[i] != 32)
//         {
//             printf("\n1if i = %d str_wr_ln = %d", i, str_wr_ln);
//             // getch();
//             if (str_wr_ln == wld_ln - 1 && (str[i + 1] == 32||str[i+1]== 0))
//             {
//                 printf("\n2if i = %d", i);
//                 // getch();
//                 str_wr_ln = -1;
//                 for (j = i; j >= befor; j--)
//                 {
//                     printf("\n2for j = %d, befor = %d", j, befor);
//                     // getch();
//                     for (k = 0; k <= wld_ln - 1; k++)
//                     {
//                         printf("\n3for k = %d", k);
//                         // getch();
//                         if (word[k] == str[j])
//                         {
//                             printf("\n3if k=j");
//                             // getch();
//                             break;
//                         }
//                     }
//                     if (k == wld_ln)
//                     {
//                         printf("\n4if k == wld_ln");
//                         // getch();
//                         break;
//                     }
//                 }
//                 if (j == befor - 1)
//                 {
//                     anagrams++;
//                     printf("\n5if j = befor anagrams = %d", anagrams);
//                     // getch();
//                 }
//             }
//             if(str[i+1]==32)
//             {
//                 befor = i+2;
//                 str_wr_ln = -1;
//             }
//             str_wr_ln++;
//         }
//     }

//     printf("\n\n\n\n%s", str);
//     printf("\n%s\n%d\n\n", word, anagrams);
// }

// 144. find total anagrams of given word
// Statement: If two string P and Q of same length N, contains same set of characters C(i) but in different order they are called as anagram of

// each other. For example, listen and silent are anagram of each other.

// Your task is to find all the anagrams of a given word into a sentence.

// Suppose sentence S is "abc bcd cda xyz bac mno bca pqr acb"

// And given word W is abc

// you should count the same word and all anagrams of given word W=abc in S

// so there are total 4 anagrams including same word and that are given below.

// abc, bac, bca, acb

// finally print the number of total anagrams including the same word also in output.

// Input: first line contains a string S of size n denoting a sentence.

// Second line contains a string of size m denoting the word W.

// Output: output contains an integer denoting number of total anagrams including the same word.

// Constraints: 5<=n<=100

// 2<=m<=15

// Example

// abc bcd cda xyz bac mno bca pqr acb

// abc

// 4

// abc cba sgd dgb sabc sabcs sdabc dbsb cbcb acb bca cba cab
// 0123456789012345678901234567890123456789012345678901234567890
// 0          1         2         3         4         5
// abc