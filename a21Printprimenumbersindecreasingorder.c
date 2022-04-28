#include <stdio.h>
int main()
{
    int n, j, m, i, f;
    scanf("%d%d", &n, &m);
    // printf("n = %d m = %d\n", n, m);
    if (n < m)
    {
        n = n + m;
        m = n - m;
        n = n - m;
        // printf("n = %d m = %d\n", n, m);
    }
    for (i = n; i >= m; i--)
    {
        // printf("1 ");
        for (j = 2; j <= i; j++)
        {
            // printf("2 ");
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i)
        {
            printf("%d ", i);
        }
    }
}
// 21. Print prime numbers in decreasing order
// Statement:Prime numbers are those natural numbers which can have only two integer factors, 1 and the number itself. 1 is neither Prime nor composite

// Accept two numbers N and M where both N>M or M>N conditions are valid only condition N=M is not allowed. your program should be smart enough to find all the prime

// numbers P(i) available between numbers N and M (including N and M) and print them in decreasing order while condition can be either N>M or M>N.

// For example, if the values of N and M will be

// N=5, M=15

// or

// N=15, M=5

// in both cases output should be 13 11 7 5

// If no prime numbers P(i) are available between N and M print -1.

// For example, if N=10 and M=8 then there is no prime number available in this range including N and M also, so print -1.

// Input:first line contain two integers N and M separated by space.

// Output:contains all prime numbers P(i) available between N and M(including N and M)in decreasing order separated by space in a line.

// Constraints:2<=N<=50000

// 2<=M<=50000

// N != M

// Example:

// 5 15

// 13 11 7 5