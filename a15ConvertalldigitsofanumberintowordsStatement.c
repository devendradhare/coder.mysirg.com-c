#include <stdio.h>
int main()
{
    int N, d = 10000, copy, sw;
    scanf("%d", &N);
    copy = N;
    while (d > 0)
    {
        N = copy;
        N /= d;
        d /= 10;
        switch (N%10)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        case 0:
            printf("Zero ");
            break;
        }
    }
}

// 15. Convert all digits of a number into words
// Statement:A number can be formed by single or multiple digits N. A teacher wants to make it typical exercise for primary students to pronounce digits and write digits in

// words. For this she took the help of big numbers which are combination of N digits. So, to save the time for printing multiple papers of such exercises she needs a

// program to convert  digits of number into word. For example, if the number is 194, she wants to convert and print it as One Nine Four.

// Your task is to write a program such that it accepts a number N and print digits of this number in word.

// Note:while converting digit into word starts each word with capital letter in output and N should only be 5 digit number.

// Input:one integer N from STDIN.

// Output:print all the digits of numbers in words separated by space

// Constraints:10000<=N<=99999

// N=5

// Example:

// 31265

// Three One Two Six Five