#include <stdio.h>
int main()
{
    int dgt,tmp, a, b, i,no = 0;
    scanf("%d%d%d", &dgt, &a, &b);
    for (i = a; i <= b; i++)
    {
        tmp = i;
        while (tmp > 0)
        {
            if (dgt == tmp % 10)
            {
                no++;
                printf("%d ", i);
                break;
            }
            tmp /= 10;
        }
    }
    if (no == 0)
        printf("-1");
    
}

// 25. Find presence of digit
// Statement:Write a program to accept a digit D and two positive numbers N and M which specifies a range where M>N. Now find digit D is available (at least once)

// in how many  numbers X(i) of range formed by N and M (including N and M). finally print all the numbers X(i) between N and M (including N and M) in which

// digit D is available. The output should contain all the numbers X(i) in increasing order.

// if digit D is not present between numbers  N and M that means you don't found any X(i) print -1 in output.

// Note:if a number X(i) contain the digit D more than once still X(i) should appear only once in output. for example if D=5 and N=550 and M= 555 then each number

// from 550 to 555 contain 5 more than once but number 550 to 555 should appear only once in increasing order in output like 550 551 552 553 554 555.

// Input:first line contains an integer D denoting a digit.

// Second line contains two integers N and M separated by space.

// Output:print all the numbers X(i) separated by space available between N and M in increasing order. and if you don't found X(i) print -1.

// Constraints:1<=N<=10000

// M>=N+1

// 0<=D<=9

// Example:

// 3

// 10 32

// 13 23 30 31 32