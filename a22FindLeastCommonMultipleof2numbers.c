#include <stdio.h>
int main()
{
    int a, b, i, j, c, d;
    scanf("%d%d",&a,&b);
    for (i = 1; i <= a * b; i++)
    {
        c = b * i;
        for (j = 1; j <= c; j++)
        {
            d = a * j;
            if (d >= c)
                break;
        }
        if (d == c)
        {
            printf("%d",d);
            break;
        }
    }
}

// 22. Find Least Common Multiple of 2 numbers
// Statement:LCMstands for least common multiple. The least common multiple of two numbers is the smallest number that is a multiple of both of them.

// Write a program to accept two positive unique numbers N and M and find theLeast Common MultipleLCM of N and M.

// Input:first line contains two integers N M separated by space.

// Output:print an integer LCM denotingleast common multipleof two numbers N and M.

// Constraints:1<=N<=10000

// 1<=M<=10000

// N!=M

// Example:

// 5 10

// 10