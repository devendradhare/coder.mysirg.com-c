#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i = 1; i <n; i++)
    {
        if(n%i==0)
        {
            sum += i;
        }
    }
    if (sum == n)
        printf("1");
    else
        printf("-1");
}
// 23. Perfect Number
// Statement:The definition of perfect number  is“A Perfect Number N, is a positive integer which is equal to the sum of its factors, excluding N itself".

// in order to find a perfect number you should follow a process.

// First you should find all divisors D(i) of number N which divides N completely (exclude N itself ).

// Now find sum of all the divisors except D(i)=N, So add and find Sum S=D1+D2+….Dm.

// After addition if you Found S=N then we can say that N is a Perfect number.

// For Example, complete divisors or factor of 6 is 1 2 and 3 and sum of 1+2+3 is 6 itself so 6 is a perfect number.

// The first few of these perfect numbers are 6, 28, 496, and 8128.

// your task is to write a program to accept a number N and find N is perfect number or not if N is a perfect number print 1 if N is not a perfect number print -1.

// Input:one integer value N from STDIN

// Output:if N is perfect number print 1 if N is not a perfect number print -1.

// Constraints:1<=N<=10000

// Example:

// 6

// 1