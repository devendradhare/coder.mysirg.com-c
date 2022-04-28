#include <stdio.h>
int main()
{
    int n, i, asdf = 1;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        asdf = 1;
        while (asdf < n)
            asdf *= i;
        if (asdf == n)
        {
            printf("%d", i);
            break;
        }
    }
    if (i >= n)
        printf("-1");
}

// 18. Find the special divisor
// Statement:Numbers have many special and different properties that we could notice easily in many numbers and there are some properties too, which are only shown by
// some special numbers.one of such property we will try to  find in this problem. Some number have a special divisor or factor F (except the number itself) that ultimately

// generate quotient 1 and remainder 0 if we divide number N by factor F ,m times. The process is as follows

// N / F =Q1 and R1=0 (where N is Dividend, F is Divisor,  Q1 is Quotient and R1 is Remainder  )

// Q1 / F= Q2 and R2=0(Now Q1 is Dividend but the Divisor is same F , Q2 is new Quotient and R2 is Remainder )

// Q2 / F =Q3

// ....

// ....

// ....

// Qn / F= Qm and Rm=0  repeat the process till we get Qm=1 and for all division operation remainder R(i) should be zero.

// For example, using the  method as mentioned above,27 can be reduced to 0 by divisor 3 if we divide 27 three times by divisor 3.

// Your task is to write a program such that it accepts a number N and finds that special divisor F of that number. If N doesn’t have any such special divisor F print -1.

// Input:first line contains an integer N from STDIN

// Output:print that special divisor F and in case if you didn’t find any such divisor print -1.

// Constraints:1<=N<=10000

// F !=N

// Example:

// Example 1

// 8

// 2

// Example 2

// 25

// 5